#ifndef GAMEPANEL_H
#define GAMEPANEL_H

#include "gamecontrol.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GamePanel;
}
QT_END_NAMESPACE

class GamePanel : public QMainWindow
{
    Q_OBJECT

public:
    GamePanel(QWidget *parent = nullptr);
    ~GamePanel();
    // 初始化游戏控制类信息
    void gameControlInit();


protected:
    void paintEvent(QPaintEvent* ev);

private:
    Ui::GamePanel *ui;
    QPixmap m_bkImage;//背景图
    GameControl* m_gameCtl;//游戏控制类对象

};
#endif // GAMEPANEL_H
