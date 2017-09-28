#ifndef DUNGEONFACTORY_H
#define DUNGEONFACTORY_H

#include <QObject>

class Dungeon;

class DungeonFactory : public QObject
{
    Q_OBJECT

    using SUPER = QObject;

public:
    explicit DungeonFactory(QObject* parent = nullptr);

    Dungeon* makeDungeon(int sizeX, int sizeY);
};

#endif // DUNGEONFACTORY_H
