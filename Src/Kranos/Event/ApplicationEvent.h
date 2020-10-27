//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_APPLICATIONEVENT_H
#define KRANOS_APPLICATIONEVENT_H

#include "Event.h"

struct AppEventArgs{

    bool terminated{};

};

class ApplicationEvent : public Event<ApplicationEvent,AppEventArgs>{
public:
    ApplicationEvent(){
        listener = rxsub::subject<AppEventArgs>();
        event = this;
    };
    ~ApplicationEvent(){
        listener
        .get_subscriber()
        .unsubscribe();
    }
    inline void OnNext(AppEventArgs args)override;
    inline void OnComplete()override;
    inline void OnError(const std::exception& e)override;
    inline rxcpp::observable<AppEventArgs> GetEventListener() override;
};


void ApplicationEvent::OnNext(AppEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);
}

void ApplicationEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void ApplicationEvent::OnError(const std::exception &e) {
    //not implemented yet
}

rxcpp::observable<AppEventArgs> ApplicationEvent::GetEventListener() {
    return listener.get_observable();
}


template<> ApplicationEvent* Event<ApplicationEvent,AppEventArgs>::AddListener(){
    if (event == nullptr) {
        event = new ApplicationEvent();
        return event;
    }

    return event;

}



#endif //KRANOS_APPLICATIONEVENT_H
