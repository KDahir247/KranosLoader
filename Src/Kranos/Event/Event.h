//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_EVENT_H
#define KRANOS_EVENT_H

#include <kpch.h>
#include "rxcpp/rx.hpp"

namespace rx=rxcpp;
namespace rxsub=rxcpp::subjects;
namespace rxu=rxcpp::util;


template <class C,typename T>
class Event{

public:
    ~Event(){delete event;}

    inline virtual void OnNext(T args) = 0;
    inline virtual void OnComplete() = 0;
    inline virtual void OnError(const std::exception& e) = 0;
    inline virtual rxcpp::observable<T> GetEventListener() = 0;
    inline static C* AddListener();
    inline static C* event;
protected:
    rxsub::subject<T> listener;

};




#endif //KRANOS_EVENT_H
