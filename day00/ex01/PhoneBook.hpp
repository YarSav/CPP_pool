//
// Created by ysavenko on 30.10.17.
//

#ifndef CPP_POLL_PHONEBOOK_HPP
#define CPP_POLL_PHONEBOOK_HPP

#include "Contact.hpp"
#include "iomanip"

class PhoneBook {
public:
    Contact contacts[8];
    int     count;
    void    add_cont();
    void    search_cont();
    PhoneBook();
    ~ PhoneBook();
    void print_full_cont(int a);
};


#endif //CPP_POLL_PHONEBOOK_HPP
