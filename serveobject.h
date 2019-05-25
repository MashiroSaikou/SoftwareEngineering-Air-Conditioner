#ifndef SERVEOBJECT_H
#define SERVEOBJECT_H

#include <QObject>
#include "m_control.h"
#include "room.h"

class ServeObject : public QObject
{
    Q_OBJECT
public:
    explicit ServeObject(QObject *parent = nullptr);

    ~ServeObject(){}

    void init(int, int, int, int, double, double, double);

    bool get_fee_and_feerate(int, state_info*);

    bool setReady(bool);

    bool dispatchRoom(int newRID, int oldnewRID, QJsonDocument r, int serveTime);

    bool dispatchRoom(int newRID, QJsonDocument r);

    void releaseRoom(int oldRID, int serveTime);
private:
    int temp_lowLimit;

    int temp_highLimit;

    int default_targetTemp;

    int mode;

    int feeRate_L;

    int feeRate_M;

    int feeRate_H;

    bool isReady;

    bool servedMap[ROOMCOUNT];

    int servedCount;

    void do_request(int rid, QJsonDocument r);

signals:

public slots:
    doRequest();
};

#endif // SERVEOBJECT_H
