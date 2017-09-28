#include "game.h"
#include "engine.h"

Game::Game(QObject* parent) :
    SUPER(parent),
    m_engine(new Engine(this))
{
}

Engine* Game::engine() const
{
    return m_engine;
}

void Game::setEngine(Engine* engine)
{
    m_engine = engine;
}
