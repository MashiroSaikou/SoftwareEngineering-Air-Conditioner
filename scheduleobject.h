#ifndef SCHEDULEOBJECT_H
#define SCHEDULEOBJECT_H

#include <QObject>
#include <QList>
#include <QVector>
#include <QMap>
#include "waitroom.h"
#include "serveroom.h"

class ScheduleObject : public QObject
{
    Q_OBJECT
public:
    explicit ScheduleObject(QObject *parent = nullptr);

    ~ScheduleObject(){}

    void schedule();//not understand

    void dispatch();//not understand

    void getbill();//not understand

    void get_state_detail(int, state_info*);

    bool setReady(bool);

private:
    void init();

//    QVector<WaitRoom> wait_room;

//    QVector<ServeRoom> serve_room;
    WaitRoom wait_rooms;

    ServeRoom serve_rooms;

    bool isReady;

signals:
    requestDispatch();
public slots:
};

#endif // SCHEDULEOBJECT_H
