//
// Created by ysavenko on 30.10.17.
//

#ifndef CPP_POLL_CONTACT_HPP
#define CPP_POLL_CONTACT_HPP

#include "iostream"

class Contact {
public:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birth_date;
    std::string fav_meal;
    std::string underwear_color;
    std::string scret;
    int         index;
//    Contact(std::string first, std::string last, std::string nick, std::string login, std::string postal,
//            std::string email, std::string phone, std::string birth, std::string fav, std::string under, std::string ser);
    Contact();
    ~Contact();
};


#endif //CPP_POLL_CONTACT_HPP
