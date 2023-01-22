#include "sizemodifier.h"

SizeModifier::SizeModifier(QObject *parent) : QObject(parent)
{

}

/// fillMaxWidth
void SizeModifier::setFillMaxWidth(const bool &val) {
    m_fillMaxWidth = val;
    emit fillMaxWidthChanged();
}

bool SizeModifier::fillMaxWidth() const {
    return m_fillMaxWidth;
}

/// fillMaxHeight
void SizeModifier::setFillMaxHeight(const bool &val) {
    m_fillMaxHeight = val;
    emit fillMaxHeightChanged();
}

bool SizeModifier::fillMaxHeight() const {
    return m_fillMaxHeight;
}

/// width
void SizeModifier::setWidth(const int &val) {
    m_width = val;
    emit widthChanged();
}

int SizeModifier::width() const {
    return m_width;
}

/// height
void SizeModifier::setHeight(const int &val) {
    m_height = val;
    emit heightChanged();
}

int SizeModifier::height() const {
    return m_height;
}
