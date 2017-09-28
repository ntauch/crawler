#ifndef DUNGEON_H
#define DUNGEON_H

#include <QObject>

class Room;

class Dungeon : public QObject
{
    Q_OBJECT
    using SUPER = QObject;

public:
    explicit Dungeon(int sizeX, int sizeY, QObject* parent = nullptr);

    QList<Room *> rooms() const;

private:
    QList<Room*> m_rooms;
};

#endif // DUNGEON_H
