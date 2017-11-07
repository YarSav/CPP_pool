//
// Created by ysavenko on 07.11.17.
//
#include "serialize.hpp"

Data *deserialize(void *raw) {
    return static_cast<Data *>(raw);
}

void * serialize( void )
{
    Data *data = new Data;
    std::string string = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char d[9];
    char e[9];
    int a = 0;
    while (a < 8)
    {
        d[a] = string[rand() % 61];
        e[a] = string[rand() % 61];
        a++;
    }
    d[8] = '\0';
    e[8] = '\0';
    data->s1 = d;
    data->s2= e;
    return data;
}

int main()
{
    std::srand((unsigned)time(NULL));
    void *data = serialize();
    std::cout <<deserialize(data)->s1<<std::endl;
    std::cout <<deserialize(data)->s2<<std::endl;
}