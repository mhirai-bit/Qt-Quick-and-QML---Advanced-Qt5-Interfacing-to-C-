#ifndef LEARNQTLOGO_H
#define LEARNQTLOGO_H

#include <QObject>
#include <QImage>
#include <QQuickPaintedItem>

class LearnQtLogo : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor bgColor READ bgColor WRITE setBgColor NOTIFY bgColorChanged)
    Q_PROPERTY(QColor textColor READ textColor WRITE setTextColor NOTIFY textColorChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)
    Q_PROPERTY(QtTopic topic READ topic WRITE setTopic NOTIFY topicChanged)
public:
    explicit LearnQtLogo(QQuickItem *parent = nullptr);

    void paint(QPainter *painter);

    enum QtTopic {
        QTCPP,
        QTQUICK
    };
    Q_ENUM(QtTopic);

    const QColor &bgColor() const;
    void setBgColor(const QColor &newBgColor);

    const QColor &textColor() const;
    void setTextColor(const QColor &newTextColor);

    const QString &text() const;
    void setText(const QString &newText);

    const QtTopic &topic() const;
    void setTopic(const QtTopic &newTopic);

signals:
    void bgColorChanged();

    void textColorChanged();

    void textChanged();

    void topicChanged();

private:

    QColor m_bgColor;
    QColor m_textColor;
    QString m_text;
    QtTopic m_topic;
};

#endif // LEARNQTLOGO_H
