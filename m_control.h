#ifndef M_CONTROL_H
#define M_CONTROL_H

#include <QObject>
#include "serveobject.h"
#include "scheduleobject.h"

typedef struct _state_info {
    int state;
    int current_temp;
    int target_temp;
    double fan;
    double feeRate;
    double fee;
    int Duration;
}state_info;

class M_Control : public QObject
{
    Q_OBJECT
public:
    explicit M_Control(QObject *parent = nullptr);

    ~M_Control(){}

    bool powerOn();

    bool setPara(int, int, int, int, double, double, double);

    bool startUP(bool);

    state_info checkRoomState(int);

private:
//    ServeObject* serve[3];

//    ScheduleObject* schedule;

signals:

public slots:
};

#endif // M_CONTROL_H
