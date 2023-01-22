#ifndef ARRANGEMENT_H
#define ARRANGEMENT_H

#include <QObject>

class Arrangement : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(Arrangement)
public:
    explicit Arrangement(QObject *parent = nullptr);
    enum EnArrangement {
        SpaceBetween
    };
    Q_ENUM(EnArrangement)
signals:

};

#endif // ARRANGEMENT_H
