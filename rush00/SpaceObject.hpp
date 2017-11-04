#ifndef SPACEOBJECT_HPP
#define SPACEOBJECT_HPP

#include <ostream>

class SpaceObject {
public:
    int getX() const;
    int getY() const;
    int getDamage() const;
    int getHP() const;
    int getMaxHP() const;
    char getC() const;
    virtual SpaceObject &operator=(const SpaceObject &spaceObject);
    SpaceObject &operator+=(int amount);
    SpaceObject &operator-=(int amount);
    void kill();

    SpaceObject();
    SpaceObject(SpaceObject &spaceObject);
    SpaceObject(int _x, int _y, int _damage, int _hp, int _maxHP, char _c);
    virtual ~SpaceObject();
protected:
    int _x;
    int _y;
    int _damage;
    int _hp;
    int _maxHP;
    char _c;
    void _normHP();
    virtual void moveUp(int distance);
    virtual void moveLeft(int distance);
    virtual void moveDown(int distance);
    virtual void moveRight(int distance);
};

std::ostream &operator<<(std::ostream &os, const SpaceObject &o);




#endif//SPACEOBJECT_HPP
