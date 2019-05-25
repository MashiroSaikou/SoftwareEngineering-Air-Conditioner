#include "m_control.h"

ServeObject* serve;
ScheduleObject* schedule;


M_Control::M_Control(QObject *parent) : QObject(parent)
{
//    //to do construct Serve and Schedule;
//    serve = new ServeObject();
//    schedule = new ScheduleObject();

//    //调度程序与服务程序的连接
//    connect(schedule, SIGNAL(requestDispatch(), serve, SLOT(doRequest()));
}

bool M_Control::powerOn() {
    serve = new ServeObject();
    schedule = new ScheduleObject();

    /*调度程序与服务程序的连接*/
    connect(schedule, SIGNAL(requestDispatch(), serve, SLOT(doRequest()));

    return true;
}

bool M_Control::setPara(
        int mode, int temp_highlimit, int temp_lowlimit, int default_targetlimit,
        double feeRate_L, double feeRate_M, double feeRate_H)
{
    serve->init(mode, temp_highlimit, temp_lowlimit, default_targetlimit,
                    feeRate_L, feeRate_M, feeRate_H);
    return true;
}

bool M_Control::startUP(bool isReady) {
    if (serve->setReady(isReady) && schedule->setReady(isReady)) {
        return true;
    }
    else
        return false;
}

state_info M_Control::checkRoomState(int roomID) {
    stateinfo state;
    serve->get_fee_and_feerate(roomID, &state);
    schedule->get_state_detail(roomID, &state);

    return state;
}

