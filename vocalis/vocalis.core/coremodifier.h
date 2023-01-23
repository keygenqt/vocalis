#ifndef COREMODIFIER_H
#define COREMODIFIER_H

#include <QObject>

class CoreModifier : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString uniqueID READ uniqueID CONSTANT)
public:
    explicit CoreModifier(QObject *parent = nullptr);
    QString uniqueID();
};

#endif // COREMODIFIER_H
