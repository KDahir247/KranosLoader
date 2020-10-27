//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_WINDOWEVENT_H
#define KRANOS_WINDOWEVENT_H
#include "Event.h"

struct WindowEventArgs{

    int width;
    int height;

};

class WindowEvent : public Event<WindowEvent, WindowEventArgs>{

public:
    WindowEvent(){listener = rxsub::subject<WindowEventArgs>();}
    ~WindowEvent(){
        listener
        .get_subscriber()
        .unsubscribe();
    }

    inline void OnNext(WindowEventArgs args) override;
    inline void OnComplete() override;
    inline void OnError(const std::exception& e) override;

    inline rxcpp::observable<WindowEventArgs> GetEventListener() override;

};

void WindowEvent::OnNext(WindowEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);

}

void WindowEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void WindowEvent::OnError(const std::exception &e) {

}

rxcpp::observable<WindowEventArgs> WindowEvent::GetEventListener() {
    return listener.get_observable();
}

template<> WindowEvent* Event<WindowEvent, WindowEventArgs>::AddListener() {
    if (event == nullptr) {
        event = new WindowEvent();
        return event;
    }

    return event;
}

#endif //KRANOS_WINDOWEVENT_H
