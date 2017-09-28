#include "engine.h"
#include "iohandler.h"

#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    QTimer::singleShot(0,[](){
         Engine::instance()->loop();
         QCoreApplication::exit(0);
    });

    return app.exec();
}
