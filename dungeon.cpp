#include "dungeon.h"
#include "room.h"

Dungeon::Dungeon(int sizeX, int sizeY, QObject* parent) :
    SUPER(parent)
{
    for (int x = 0; x < sizeX; ++x)
        for (int y = 0; y < sizeY; ++y)
            m_rooms.append(new Room(x, y));
}

QList<Room *> Dungeon::rooms() const
{
    return m_rooms;
}
