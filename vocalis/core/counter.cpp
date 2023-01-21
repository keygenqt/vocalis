#include "counter.h"

int Counter::count() {
    return m_count;
}

void Counter::incrementCount() {
    m_count++;
    emit countChanged();
}

void Counter::resetCount() {
    m_count = 0;
    emit countChanged();
}
