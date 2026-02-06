#include "gamepanel.h"
#include "ui_gamepanel.h"

#include <QPainter>
#include <QRandomGenerator>

GamePanel::GamePanel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GamePanel)
{
    ui->setupUi(this);
    //setWindowIcon(QIcon(":/logo.ico"));
    //1.添加背景图
    int num = QRandomGenerator::global()->bounded(10);
    QString path = QString(":/images/background-%1.png").arg(num+1);
    m_bkImage.load(path);
    //2.设置窗口的标题和大小
    this->setWindowTitle("欢乐斗地主");
    this->setFixedSize(1000, 650);
    //3.实例化游戏控制类对象
    gameControlInit();
}

GamePanel::~GamePanel()
{
    delete ui;
}


void GamePanel::paintEvent(QPaintEvent *ev)
{
    QPainter p(this);
    p.drawPixmap(rect(), m_bkImage);
}



void GamePanel::gameControlInit()
{
    m_gameCtl = new GameControl(this);

}

