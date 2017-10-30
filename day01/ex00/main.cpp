#include "Pony.hpp"

void ponyOnTheHeap(){
    Pony *pony = new Pony("Belka", "white", 2);
    pony->hello();
    delete pony;
}

void ponyOnTheStack(void){
    Pony pony("Strelka", "gray", 3);
    pony.hello();
}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
}