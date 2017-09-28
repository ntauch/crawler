#ifndef GAME_H
#define GAME_H

#include <QObject>

class Engine;

class Game : public QObject
{
    Q_OBJECT
    using SUPER = QObject;

    Q_PROPERTY(Engine * engine READ engine WRITE setEngine)

public:
    explicit Game(QObject* parent = nullptr);

    Engine* engine() const;

public slots:
    void setEngine(Engine* engine);

private:
    // TODO Engine dynamisch nach Situation auswechseln
    Engine* m_engine = nullptr;
};

#endif // GAME_H
