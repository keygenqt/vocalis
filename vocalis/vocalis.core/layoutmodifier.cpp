#include "layoutmodifier.h"
#include "sizemodifier.h"

LayoutModifier::LayoutModifier(QObject *parent) : SizeModifier(parent)
{

}

/// padding
void LayoutModifier::setPadding(const int &val) {
    m_padding = val;
    emit paddingChanged();
}

int LayoutModifier::padding() const {
    return m_padding;
}

/// spacing
void LayoutModifier::setSpacing(const int &val) {
    m_spacing = val;
    emit paddingChanged();
}

int LayoutModifier::spacing() const {
    return m_spacing;
}

/// arrangement
void LayoutModifier::setArrangement(const Arrangement &val) {
    m_arrangement = val;
    emit arrangementChanged();
}

LayoutModifier::Arrangement LayoutModifier::arrangement() const {
    return m_arrangement;
}
