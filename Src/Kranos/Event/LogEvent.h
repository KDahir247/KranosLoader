//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_LOGEVENT_H
#define KRANOS_LOGEVENT_H

#include "Event.h"

enum Severity{Critical = 0, Error = 1, Warning = 2, Debug = 3, Trace = 4, Info = 5};

struct LogEventArgs{
    Severity severity;
    std::string message;

};

class LogEvent : public Event<LogEvent, LogEventArgs>{
public:
    LogEvent(){listener = rxsub::subject<LogEventArgs>();}
    ~LogEvent(){
        listener
        .get_subscriber()
        .unsubscribe();
    }
    inline void OnNext(LogEventArgs args) override;
    inline void OnComplete() override;
    inline void OnError(const std::exception& e) override;

    inline rxcpp::observable<LogEventArgs> GetEventListener() override;
};

void LogEvent::OnNext(LogEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);
}

void LogEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void LogEvent::OnError(const std::exception &e) {

}

rxcpp::observable<LogEventArgs> LogEvent::GetEventListener() {
    return listener.get_observable();
}


template <> LogEvent* Event<LogEvent, LogEventArgs>::AddListener() {

    if (event == nullptr) {
        event = new LogEvent();
        return event;
    }

    return event;
}
#endif //KRANOS_LOGEVENT_H
