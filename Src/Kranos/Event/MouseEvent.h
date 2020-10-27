//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_MOUSEEVENT_H
#define KRANOS_MOUSEEVENT_H

#include "Event.h"

struct MouseEventArgs{
    double xPos{}; //Cursor X-axis Position;
    double yPos{}; //Cursor Y-axis Position
    int button{}; //Mouse Button
    int action{}; //Mouse Button Action (Press, Release)
    int mods{}; // mods Bit field
    double xOffset{}; //Scroll wheel XOffset
    double yOffset{}; //Scroll wheel YOffset
};


class MouseEvent : public  Event<MouseEvent, MouseEventArgs>{
public:
    MouseEvent(){listener = rxsub::subject<MouseEventArgs>();}
    ~MouseEvent(){
        listener
        .get_subscriber()
        .unsubscribe();
    }
    inline void OnNext(MouseEventArgs args) override;
    inline void OnComplete() override;
    inline void OnError(const std::exception& e) override;

    inline rxcpp::observable<MouseEventArgs> GetEventListener() override;


};

void MouseEvent::OnNext(MouseEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);
}

void MouseEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void MouseEvent::OnError(const std::exception &e) {

}

rxcpp::observable<MouseEventArgs> MouseEvent::GetEventListener() {
    return listener.get_observable();
}

template<> MouseEvent* Event<MouseEvent, MouseEventArgs>::AddListener() {
    if (event == nullptr) {
        event = new MouseEvent();
        return event;
    }
    return event;
}

#endif //KRANOS_MOUSEEVENT_H
