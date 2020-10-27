//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_KEYBOARDEVENT_H
#define KRANOS_KEYBOARDEVENT_H

#include "Event.h"

struct KeyboardEventArgs{

    int key{};
    int scanCode{};
    int action{};
    int mods{};
};

class KeyboardEvent : public Event<KeyboardEvent, KeyboardEventArgs>{
public:
    KeyboardEvent(){listener = rxsub::subject<KeyboardEventArgs>();}
    ~KeyboardEvent(){
        listener
        .get_subscriber()
        .unsubscribe();
    }

    inline void OnNext(KeyboardEventArgs args) override;
    inline void OnComplete() override;
    inline void OnError(const std::exception& e) override;
    inline rxcpp::observable<KeyboardEventArgs> GetEventListener() override;
};

void KeyboardEvent::OnNext(KeyboardEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);
}

void KeyboardEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void KeyboardEvent::OnError(const std::exception &e) {

}

rxcpp::observable<KeyboardEventArgs> KeyboardEvent::GetEventListener() {
    return listener.get_observable();
}

template <> KeyboardEvent* Event<KeyboardEvent, KeyboardEventArgs>::AddListener() {

    if (event == nullptr) {
        event = new KeyboardEvent;
        return event;
    }

    return event;
}


#endif //KRANOS_KEYBOARDEVENT_H
