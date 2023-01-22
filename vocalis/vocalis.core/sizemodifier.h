#ifndef SIZEMODIFIER_H
#define SIZEMODIFIER_H

#include <QObject>  

class SizeModifier : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool fillMaxWidth READ fillMaxWidth WRITE setFillMaxWidth NOTIFY fillMaxWidthChanged)
    Q_PROPERTY(bool fillMaxHeight READ fillMaxHeight WRITE setFillMaxHeight NOTIFY fillMaxHeightChanged)
    Q_PROPERTY(int width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(int height READ height WRITE setHeight NOTIFY heightChanged)

public:
    explicit SizeModifier(QObject *parent = nullptr);

    void setFillMaxWidth(const bool &val);
    bool fillMaxWidth() const;

    void setFillMaxHeight(const bool &val);
    bool fillMaxHeight() const;

    void setWidth(const int &val);
    int width() const;

    void setHeight(const int &val);
    int height() const;

signals:
    void fillMaxWidthChanged();
    void fillMaxHeightChanged();
    void widthChanged();
    void heightChanged();

private:
    bool m_fillMaxWidth = true;
    bool m_fillMaxHeight = false;
    int m_width = 0;
    int m_height = 0;

};

#endif // SIZEMODIFIER_H
