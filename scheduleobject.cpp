#include "scheduleobject.h"

ScheduleObject::ScheduleObject(QObject *parent) : QObject(parent)
{
    this->init();
}

void ScheduleObject::init() {
    isReady = false;
}

void ScheduleObject::get_state_detail(int roomID, stateinfo* state) {
    if ()
}
