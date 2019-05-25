#include "room.h"

Room::Room(QObject *parent) : QObject(parent)
{
    init();
}

void Room::init() {
    serveTime = 0;
    targetTemp = 27;
    requestList.clear();
}
