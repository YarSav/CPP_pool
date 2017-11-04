//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_SPACEOBJ_HPP
#define RUSH00_SPACEOBJ_HPP


class SpaceObj {
public:
    int x;
    int y;
    char c;
    int alive;
    int destructable;

    SpaceObj();
    SpaceObj &operator=(SpaceObj const&spaceObj);
    SpaceObj(SpaceObj const&spaceObj);
    ~SpaceObj();

    virtual void move(int y);

};


#endif //RUSH00_SPACEOBJ_HPP
