//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_GUIEVENT_H
#define KRANOS_GUIEVENT_H
#include "Event.h"

struct GUIEventArgs{


};


class GUIEvent : public Event<GUIEvent, GUIEventArgs>{
public:
    GUIEvent(){listener = rxsub::subject<GUIEventArgs>();};
    ~GUIEvent(){
        listener
    .get_subscriber()
    .unsubscribe();
    };
   inline void OnNext(GUIEventArgs args) override;
   inline void OnComplete() override;
   inline void OnError(const std::exception& e) override;
   inline rxcpp::observable<GUIEventArgs> GetEventListener() override;
};

void GUIEvent::OnNext(GUIEventArgs args) {
    listener
    .get_subscriber()
    .get_observer()
    .on_next(args);
}

void GUIEvent::OnComplete() {
    listener
    .get_subscriber()
    .get_observer()
    .on_completed();

    listener
    .get_subscriber()
    .unsubscribe();
}

void GUIEvent::OnError(const std::exception &e) {

}

rxcpp::observable<GUIEventArgs> GUIEvent::GetEventListener() {
    return rxcpp::observable<GUIEventArgs>();
}

template<> GUIEvent* Event<GUIEvent, GUIEventArgs>::AddListener() {
    if (event == nullptr) {
        event = new GUIEvent;
        return event;
    }

    return event;
}

#endif //KRANOS_GUIEVENT_H
