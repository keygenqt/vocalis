#ifndef MODIFIER_H
#define MODIFIER_H

#include <QObject>
#include <QtQml>
#include "arrangement.h"

class Modifier : public QObject
{
    Q_OBJECT
public:
    explicit Modifier(QObject *parent = nullptr);

    static void declareQML() {
        qmlRegisterType<Modifier>("Modifier", 1, 0, "Modifier");
        qmlRegisterType<Arrangement>("Arrangement", 1, 0, "Arrangement");
    }

///////////////////////////////////////////////////////
/// fillMaxWidth
Q_PROPERTY(bool fillMaxWidth READ fillMaxWidth WRITE setFillMaxWidth NOTIFY fillMaxWidthChanged)

public:
    void setFillMaxWidth(const bool &val) {
        m_fillMaxWidth = val;
        emit fillMaxWidthChanged();
    }
    bool fillMaxWidth() const {
        return m_fillMaxWidth;
    }

signals:
    void fillMaxWidthChanged();

private:
    bool m_fillMaxWidth = true;

///////////////////////////////////////////////////////
/// fillMaxHeight
Q_PROPERTY(bool fillMaxHeight READ fillMaxHeight WRITE setFillMaxHeight NOTIFY fillMaxHeightChanged)

public:
    void setFillMaxHeight(const bool &val) {
        m_fillMaxHeight = val;
        emit fillMaxHeightChanged();
    }
    bool fillMaxHeight() const {
        return m_fillMaxHeight;
    }

signals:
    void fillMaxHeightChanged();

private:
    bool m_fillMaxHeight = false;

///////////////////////////////////////////////////////
/// width
Q_PROPERTY(int width READ width WRITE setWidth NOTIFY widthChanged)

public:
    void setWidth(const int &val) {
        m_width = val;
        emit widthChanged();
    }
    int width() const {
        return m_width;
    }

signals:
    void widthChanged();

private:
    int m_width = 0;

///////////////////////////////////////////////////////
/// height
Q_PROPERTY(int height READ height WRITE setHeight NOTIFY heightChanged)

public:
    void setHeight(const int &val) {
        m_height = val;
        emit heightChanged();
    }
    int height() const {
        return m_height;
    }

signals:
    void heightChanged();

private:
    int m_height = 0;

///////////////////////////////////////////////////////
/// padding
Q_PROPERTY(int padding READ padding WRITE setPadding NOTIFY paddingChanged)

public:
    void setPadding(const int &val) {
        m_padding = val;
        emit paddingChanged();
    }
    int padding() const {
        return m_padding;
    }

signals:
    void paddingChanged();

private:
    int m_padding = 0;

///////////////////////////////////////////////////////
/// spacing
Q_PROPERTY(int spacing READ spacing WRITE setSpacing NOTIFY spacingChanged)

public:
    void setSpacing(const int &val) {
        m_spacing = val;
        emit paddingChanged();
    }
    int spacing() const {
        return m_spacing;
    }

signals:
    void spacingChanged();

private:
    int m_spacing = 0;

///////////////////////////////////////////////////////
/// arrangement
Q_PROPERTY(Arrangement::EnArrangement arrangement READ arrangement WRITE setArrangement NOTIFY arrangementChanged)

public:
    void setArrangement(const Arrangement::EnArrangement &val) {
        m_arrangement = val;
        emit arrangementChanged();
    }
    Arrangement::EnArrangement arrangement() const {
        return m_arrangement;
    }

signals:
    void arrangementChanged();

private:
    Arrangement::EnArrangement m_arrangement;

};

#endif // MODIFIER_H
