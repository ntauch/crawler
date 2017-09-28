#ifndef ROOM_H
#define ROOM_H

#include <QObject>

class Room : public QObject
{
    Q_OBJECT
    using SUPER = QObject;

    Q_PROPERTY(int xCoordinate READ getX WRITE setX)
    Q_PROPERTY(int yCoordinate READ getY WRITE setY)

public:
    explicit Room(int xCoordinate, int yCoordinate, QObject* parent = nullptr);

    int getX() const;
    int getY() const;

public slots:
    void setX(int xCoordinate);
    void setY(int yCoordinate);

private:
    int m_xCoordinate = -1;
    int m_yCoordinate = -1;

    // TODO QList<Actor>
    // TODO QList<Item>
};

#endif // ROOM_H
