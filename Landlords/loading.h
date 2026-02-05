#ifndef LOADING_H
#define LOADING_H

#include <QWidget>

class Loading : public QWidget
{
    Q_OBJECT
public:
    explicit Loading(QWidget *parent = nullptr);

signals:
protected:
    void paintEvent(QPaintEvent* event);

private:
    QPixmap m_bk;//加载背景图
    QPixmap m_progress;//加载进度图
    int m_dist = 15;//当前加载进度
};

#endif // LOADING_H
