//
// Created by ysavenko on 04.11.17.
//

#ifndef RUSH00_SPACETRASH_HPP
#define RUSH00_SPACETRASH_HPP

#include "SpaceObj.hpp"

class SpaceTrash : public SpaceObj{
public:
    SpaceTrash();
    ~SpaceTrash();
    SpaceTrash &operator=(SpaceTrash const&trash);
    SpaceTrash(SpaceTrash const&trash);
};


#endif //RUSH00_SPACETRASH_HPP
