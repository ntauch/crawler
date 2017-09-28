#include "dungeon.h"
#include "dungeonfactory.h"

DungeonFactory::DungeonFactory(QObject* parent) :
    SUPER(parent)
{
}

Dungeon *DungeonFactory::makeDungeon(int sizeX, int sizeY)
{
    return new Dungeon(sizeX, sizeY);
}
