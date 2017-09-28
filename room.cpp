#include "room.h"

Room::Room(int xCoordinate, int yCoordinate, QObject* parent) :
    SUPER(parent),
    m_xCoordinate(xCoordinate),
    m_yCoordinate(yCoordinate)
{
}

int Room::getX() const
{
    return m_xCoordinate;
}

int Room::getY() const
{
    return m_yCoordinate;
}

void Room::setX(int xCoordinate)
{
    m_xCoordinate = xCoordinate;
}

void Room::setY(int yCoordinate)
{
    m_yCoordinate = yCoordinate;
}
