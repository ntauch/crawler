#ifndef IOHANDLER_H
#define IOHANDLER_H

#include <QObject>

class IOHandler : public QObject
{
    Q_OBJECT
    using SUPER = QObject;

public:
    explicit IOHandler(QObject *parent = nullptr);

    QString readLine();
    void printLine(const QString &line);



};

#endif // IOHANDLER_H
