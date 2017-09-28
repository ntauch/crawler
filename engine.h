#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>

class IOHandler;

class DungeonFactory;
class Dungeon;

class Engine : public QObject
{
    Q_OBJECT
    using SUPER = QObject;

    Q_PROPERTY(bool playing READ playing WRITE setPlaying NOTIFY playingChanged)

signals:
    void playingChanged(bool playing);

public:
    explicit Engine(QObject* parent = nullptr);

    bool playing() const;

    void init();
    void loop();

    void setPlaying(bool playing);

private:
    void handleInput();
    void update();

private:
    bool m_playing;

    IOHandler* m_ioHandler = nullptr;
    DungeonFactory* m_factory = nullptr;

    Dungeon* m_map = nullptr;
};

#endif // ENGINE_H
