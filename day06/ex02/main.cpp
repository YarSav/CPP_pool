//
// Created by ysavenko on 07.11.17.
//

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>


void identify_from_pointer( Base * p )
{
    if (dynamic_cast<A *>(p))
        std::cout<<"A"<<std::endl;
    if (dynamic_cast<B *>(p))
        std::cout<<"B"<<std::endl;
    if (dynamic_cast<C *>(p))
        std::cout<<"C"<<std::endl;
}
void identify_from_reference( Base & p )
{
    if (dynamic_cast<A *>(&p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(&p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(&p)) {
        std::cout << "C" << std::endl;
    }
}
Base * generate(void)
{
    int a = rand()%30;
    if (a < 10)
    {
        std::cout<<"A created"<<std::endl;
        return new A;
    }
    else if (a < 20)
    {
        std::cout<<"B created"<<std::endl;
        return  new B;
    }
    std::cout<<"C created"<<std::endl;
    return new C;

}
int main()
{
    std::srand((unsigned)time(NULL));
    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;
}