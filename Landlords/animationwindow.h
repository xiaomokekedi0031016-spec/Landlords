#ifndef ANIMATIONWINDOW_H
#define ANIMATIONWINDOW_H

#include <QWidget>

/******************************************************************************
 *
 * @file       animationwindow.h
 * @brief      特效动画窗口类，负责显示游戏中的各种特效动画
 *
 * @author     badwoman
 * @date       2026/02/10
 * @history
 *****************************************************************************/

class AnimationWindow : public QWidget
{
    Q_OBJECT
public:
    enum Type{Sequence, Pair};
    explicit AnimationWindow(QWidget *parent = nullptr);

    // 显示下注分数
    void showBetScore(int bet);
signals:

protected:
    void paintEvent(QPaintEvent* ev);

private:
    QPixmap m_image;

};

#endif // ANIMATIONWINDOW_H
