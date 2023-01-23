#ifndef LAYOUTMODIFIER_H
#define LAYOUTMODIFIER_H

#include <QObject>
#include "coremodifier.h"

class LayoutModifier : public CoreModifier
{
    Q_OBJECT

    // paddings
    Q_PROPERTY(int padding READ padding WRITE paddingSet NOTIFY paddingChanged)
    Q_PROPERTY(int paddingTop READ paddingTop WRITE paddingTopSet NOTIFY paddingTopChanged)
    Q_PROPERTY(int paddingLeft READ paddingLeft WRITE paddingLeftSet NOTIFY paddingLeftChanged)
    Q_PROPERTY(int paddingRight READ paddingRight WRITE paddingRightSet NOTIFY paddingRightChanged)
    Q_PROPERTY(int paddingBottom READ paddingBottom WRITE paddingBottomSet NOTIFY paddingBottomChanged)
    Q_PROPERTY(int paddingVertical READ paddingVertical WRITE paddingVerticalSet NOTIFY paddingVerticalChanged)
    Q_PROPERTY(int paddingHorizontal READ paddingHorizontal WRITE paddingHorizontalSet NOTIFY paddingHorizontalChanged)

    // size
    Q_PROPERTY(bool fillMaxWidth READ fillMaxWidth WRITE fillMaxWidthSet NOTIFY fillMaxWidthChanged)
    Q_PROPERTY(bool fillMaxHeight READ fillMaxHeight WRITE fillMaxHeightSet NOTIFY fillMaxHeightChanged)
    Q_PROPERTY(int width READ width WRITE widthSet NOTIFY widthChanged)
    Q_PROPERTY(int height READ height WRITE heightSet NOTIFY heightChanged)

    // other
    Q_PROPERTY(Arrangement arrangement READ arrangement WRITE arrangementSet NOTIFY arrangementChanged)
    Q_PROPERTY(int spacing READ spacing WRITE spacingSet NOTIFY spacingChanged)

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

    // paddings
    void paddingSet(const int &val);
    int padding() const;

    void paddingTopSet(const int &val);
    int paddingTop() const;

    void paddingLeftSet(const int &val);
    int paddingLeft() const;

    void paddingRightSet(const int &val);
    int paddingRight() const;

    void paddingBottomSet(const int &val);
    int paddingBottom() const;

    void paddingVerticalSet(const int &val);
    int paddingVertical() const;

    void paddingHorizontalSet(const int &val);
    int paddingHorizontal() const;

    // size
    void fillMaxWidthSet(const bool &val);
    bool fillMaxWidth() const;

    void fillMaxHeightSet(const bool &val);
    bool fillMaxHeight() const;

    void widthSet(const int &val);
    int width() const;

    void heightSet(const int &val);
    int height() const;

    // other
    void spacingSet(const int &val);
    int spacing() const;

    void arrangementSet(const Arrangement &val);
    Arrangement arrangement() const;

signals:
    // paddings
    void paddingChanged();
    void paddingTopChanged();
    void paddingLeftChanged();
    void paddingRightChanged();
    void paddingBottomChanged();
    void paddingVerticalChanged();
    void paddingHorizontalChanged();

    // size
    void fillMaxWidthChanged();
    void fillMaxHeightChanged();
    void widthChanged();
    void heightChanged();

    // other
    void spacingChanged();
    void arrangementChanged();

private:
    // paddings
    int m_padding = 0;
    int m_paddingTop = 0;
    int m_paddingLeft = 0;
    int m_paddingRight = 0;
    int m_paddingBottom = 0;
    int m_paddingVertical = 0;
    int m_paddingHorizontal = 0;

    // size
    bool m_fillMaxWidth = true;
    bool m_fillMaxHeight = false;
    int m_width = 0;
    int m_height = 0;

    // other
    int m_spacing = 0;
    Arrangement m_arrangement = Start;
};

#endif // LAYOUTMODIFIER_H
