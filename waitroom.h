#ifndef WAITROOM_H
#define WAITROOM_H

#include <QObject>

typedef struct _WaitRoom {
    int roomID;
    int windSpeed;
    int waitTime;
}WaitRoom;

class WaitRoom : public QObject
{
    Q_OBJECT
public:
    explicit WaitRoom(QObject *parent = nullptr);

signals:

public slots:
};

#endif // WAITROOM_H
