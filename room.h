#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QVector>
class Room : public QObject
{
    Q_OBJECT
public:
    explicit Room(QObject *parent = nullptr);

    void init();

    int fee;

    int currentTemp;

    int mode;

    int targetTemp;

    int serveTime;

    QVector<QString> requestList;

signals:

public slots:
};

#endif // ROOM_H
