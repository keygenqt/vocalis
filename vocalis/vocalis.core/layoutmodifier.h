#ifndef LAYOUTMODIFIER_H
#define LAYOUTMODIFIER_H

#include <QObject>
#include "sizemodifier.h"

class LayoutModifier : public SizeModifier
{
    Q_OBJECT

    Q_PROPERTY(int padding READ padding WRITE setPadding NOTIFY paddingChanged)
    Q_PROPERTY(int spacing READ spacing WRITE setSpacing NOTIFY spacingChanged)
    Q_PROPERTY(Arrangement arrangement READ arrangement WRITE setArrangement NOTIFY arrangementChanged)

public:
    explicit LayoutModifier(QObject *parent = nullptr);

    enum Arrangement {
        Start,
        End,
        Top,
        Bottom,
        Center,
        SpaceBetween
    };

    Q_ENUM(Arrangement)

    public:
        void setSpacing(const int &val);
        int spacing() const;

        void setPadding(const int &val);
        int padding() const;

        void setArrangement(const Arrangement &val);
        Arrangement arrangement() const;

    signals:
        void spacingChanged();
        void paddingChanged();
        void arrangementChanged();

    private:
        int m_padding = 0;
        int m_spacing = 0;
        Arrangement m_arrangement = Start;
};

#endif // LAYOUTMODIFIER_H
