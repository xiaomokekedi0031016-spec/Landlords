#include "scorepanel.h"
#include "ui_scorepanel.h"

const QString MYCOLOR[] = {"black", "white", "red", "blue", "green"};
ScorePanel::ScorePanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScorePanel)
{
    ui->setupUi(this);
}

ScorePanel::~ScorePanel()
{
    delete ui;
}

