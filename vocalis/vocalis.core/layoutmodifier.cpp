#include "layoutmodifier.h"

LayoutModifier::LayoutModifier(QObject *parent) : CoreModifier(parent) {

}

// paddings
void LayoutModifier::paddingSet(const int &val) {
    m_padding = val;
    emit paddingChanged();
}

int LayoutModifier::padding() const {
    return m_padding;
}

void LayoutModifier::paddingTopSet(const int &val) {
    m_paddingTop = val;
    emit paddingTopChanged();
}

int LayoutModifier::paddingTop() const {
    return m_padding != 0 ? m_padding : (m_paddingVertical != 0 ? m_paddingVertical : m_paddingTop);
}

void LayoutModifier::paddingLeftSet(const int &val) {
    m_paddingLeft = val;
    emit paddingLeftChanged();
}

int LayoutModifier::paddingLeft() const {
    return m_padding != 0 ? m_padding : (m_paddingHorizontal != 0 ? m_paddingHorizontal : m_paddingLeft);
}

void LayoutModifier::paddingRightSet(const int &val) {
    m_paddingRight = val;
    emit paddingRightChanged();
}

int LayoutModifier::paddingRight() const {
    return m_padding != 0 ? m_padding : (m_paddingHorizontal != 0 ? m_paddingHorizontal : m_paddingRight);
}

void LayoutModifier::paddingBottomSet(const int &val) {
    m_paddingBottom = val;
    emit paddingBottomChanged();
}

int LayoutModifier::paddingBottom() const {
    return m_padding != 0 ? m_padding : (m_paddingVertical != 0 ? m_paddingVertical : m_paddingBottom);
}

void LayoutModifier::paddingVerticalSet(const int &val) {
    m_paddingVertical = val;
    emit paddingVerticalChanged();
}

int LayoutModifier::paddingVertical() const {
    return m_paddingVertical;
}

void LayoutModifier::paddingHorizontalSet(const int &val) {
    m_paddingHorizontal = val;
    emit paddingHorizontalChanged();
}

int LayoutModifier::paddingHorizontal() const {
    return m_paddingHorizontal;
}

// size
void LayoutModifier::fillMaxWidthSet(const bool &val) {
    m_fillMaxWidth = val;
    emit fillMaxWidthChanged();
}

bool LayoutModifier::fillMaxWidth() const {
    return m_fillMaxWidth;
}

void LayoutModifier::fillMaxHeightSet(const bool &val) {
    m_fillMaxHeight = val;
    emit fillMaxHeightChanged();
}

bool LayoutModifier::fillMaxHeight() const {
    return m_fillMaxHeight;
}

void LayoutModifier::widthSet(const int &val) {
    m_width = val;
    emit widthChanged();
}

int LayoutModifier::width() const {
    return m_width;
}

void LayoutModifier::heightSet(const int &val) {
    m_height = val;
    emit heightChanged();
}

int LayoutModifier::height() const {
    return m_height;
}

// other
void LayoutModifier::spacingSet(const int &val) {
    m_spacing = val;
    emit spacingChanged();
}

int LayoutModifier::spacing() const {
    return m_spacing;
}

void LayoutModifier::arrangementSet(const Arrangement &val) {
    m_arrangement = val;
    emit arrangementChanged();
}

LayoutModifier::Arrangement LayoutModifier::arrangement() const {
    return m_arrangement;
}
