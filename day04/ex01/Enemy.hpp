//
// Created by ysavenko on 02.11.17.
//

#ifndef CPP_POLL_ENEMY_HPP
#define CPP_POLL_ENEMY_HPP

#include "iostream"

class Enemy
{
protected:
    int				_hp;
    std::string		_type;
public:
    Enemy(int hp, std::string const &type);
    virtual ~Enemy(void);
    Enemy(Enemy const &enemy);
    Enemy &operator=(Enemy const &enemy);
    std::string	getType(void) const;
    int	getHp() const;
    virtual void takeDamage(int damage);
};


#endif //CPP_POLL_ENEMY_HPP
