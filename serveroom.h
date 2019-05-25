#ifndef SERVEROOM_H
#define SERVEROOM_H

#include <QObject>

typedef struct _ServeRoom {
    int roomID;
    int windSpeed;
    int serveTime;
}ServeRoom;

class ServeRoom : public QObject
{
    Q_OBJECT
public:
    explicit ServeRoom(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SERVEROOM_H
