//
// Created by ysavenko on 04.11.17.
//
#include "ctime"
#include "iostream"
#include <sys/time.h>
int main()
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    std::cout<<ms<<std::endl;
}