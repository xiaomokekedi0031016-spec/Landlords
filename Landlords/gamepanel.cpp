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
    this->setWindowTitle("欢乐斗地主");
    this->setFixedSize(1000, 650);
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

