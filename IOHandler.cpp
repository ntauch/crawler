#include "iohandler.h"

#include <QTextStream>

IOHandler::IOHandler(QObject *parent)
    : SUPER(parent)
{}

QString IOHandler::readLine()
{
    QTextStream qstdin(stdin);
    qstdin.flush();
    return qstdin.readLine();
}

void IOHandler::printLine(const QString &line)
{
    QTextStream(stdout) << line << endl;
}
