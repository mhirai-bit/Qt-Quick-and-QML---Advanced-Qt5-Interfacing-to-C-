#ifndef STAIRCHART_H
#define STAIRCHART_H

#include <QObject>
#include <QQuickPaintedItem>

class StairChart : public QQuickPaintedItem
{
    Q_OBJECT
    void drawStair(QPainter* painter, QRect mRect, QColor mColor, qreal barValue, int startingPoint);

    void drawScale(QPainter* painter, QRect mRect);
public:
    explicit StairChart(QQuickItem *parent = nullptr);
    void paint(QPainter* painter);

signals:

};

#endif // STAIRCHART_H
