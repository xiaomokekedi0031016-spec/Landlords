#ifndef USERPLAYER_H
#define USERPLAYER_H

#include "player.h"
#include <QObject>

class UserPlayer : public Player
{
    Q_OBJECT
public:
    using Player::Player;
    explicit UserPlayer(QObject *parent = nullptr);

    void prepareCallLord() override;
    void preparePlayHand() override;

signals:

};

#endif // USERPLAYER_H
