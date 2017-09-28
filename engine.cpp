#include "engine.h"
#include "iohandler.h"
#include "dungeonfactory.h"
#include "dungeon.h"
#include "room.h"

#include <QDebug>

Engine* Engine::instance()
{
    static Engine* s_instance = new Engine;

    return s_instance;
}

void Engine::loop()
{
    while (m_playing) {
        m_ioHandler->printLine("Welcome to CRAWLER. Please choose:");
        m_ioHandler->printLine("(q)uit, (i)nit");

        handleInput();
        update();

    }
    // TODO Engine als AbstractEngine nutzen und unterschiedliche Loops implementieren, d.h. MenuEngine, GameEngine
    // TODO HandleInput als TemplateMethod
}

bool Engine::playing() const
{
    return m_playing;
}

void Engine::init()
{
    m_map = m_factory->makeDungeon(8, 8);
}

void Engine::setPlaying(bool playing)
{
    if (m_playing == playing)
        return;

    m_playing = playing;
    emit playingChanged(m_playing);
}

Engine::Engine(QObject* parent) :
    SUPER(parent),
    m_playing(true),
    m_ioHandler(new IOHandler(this)),
    m_factory(new DungeonFactory(this))
{
}

void Engine::handleInput()
{
    QString input = m_ioHandler->readLine();

    if (input == "i") {
        m_ioHandler->printLine("Initializing...");
        init();
        setPlaying(false);
    } else if (input == "q") {
        m_ioHandler->printLine("Thanks for playing CRAWLER!");
        setPlaying(false);
    } else
        m_ioHandler->printLine("Input invalid. Please try again.");
}

void Engine::update()
{

}
