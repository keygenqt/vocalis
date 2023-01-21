#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject {
    Q_OBJECT
    Q_PROPERTY(int count READ count NOTIFY countChanged)
private:
    int m_count = 0;
public:
    int count();
    Q_INVOKABLE void incrementCount();
    Q_INVOKABLE void resetCount();
signals:
    void countChanged();
};

#endif // COUNTER_H
