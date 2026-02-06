#ifndef SCOREPANEL_H
#define SCOREPANEL_H

#include <QLabel>
#include <QWidget>

/******************************************************************************
 *
 * @file       scorepanel.h
 * @brief      分数面板
 *
 * @author     badwoman
 * @date       2026/02/06
 * @history
 *****************************************************************************/

namespace Ui {
class ScorePanel;
}

class ScorePanel : public QWidget
{
    Q_OBJECT

public:
    explicit ScorePanel(QWidget *parent = nullptr);
    ~ScorePanel();

private:
    Ui::ScorePanel *ui;
};

#endif // SCOREPANEL_H
