//
// Created by ysavenko on 30.10.17.
//

#include "PhoneBook.hpp"

void print_cont(std::string text)
{
    if (text.length() > 10)
        std::cout <<std::right << std::setw(10)<< text.substr(0,9)<<"."<<"|";
    else
        std::cout << std::right << std::setw(10) <<text<< "|";
}
void PhoneBook::print_full_cont(int a)
{
    std::cout <<"Index"<<a<<std::endl;
    std::cout <<"First name"<<this->contacts[a].first_name<<std::endl;
    std::cout <<"First name"<<this->contacts[a].last_name<<std::endl;
    std::cout <<"Nick name "<<this->contacts[a].nick_name<<std::endl;
    std::cout <<"Login "<<this->contacts[a].login<<std::endl;
    std::cout <<"Postal adress "<<this->contacts[a].postal_adress<<std::endl;
    std::cout <<"Birth date "<<this->contacts[a].birth_date<<std::endl;
    std::cout <<"Favourite meal "<<this->contacts[a].fav_meal<<std::endl;
    std::cout <<"Underwear color "<<this->contacts[a].underwear_color<<std::endl;
    std::cout <<"Secret "<<this->contacts[a].scret<<std::endl;

}
void PhoneBook::search_cont()
{
    if (count == 0)
    {
        std::cout <<"Contsct list is empty"<<std::endl;
        return;
    }
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "first name" << "|";
    std::cout << std::right << std::setw(10) << "last name" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << std::endl;
    int a = 0;
    while (a < count)
    {
        std::cout << std::right << std::setw(10) << a << "|";
        print_cont(this->contacts[a].first_name);
        print_cont(this->contacts[a].last_name);
        print_cont(this->contacts[a].nick_name);
        std::cout << std::endl;
        a++;
    }
    std::cout << "Enter contact index 0 -"<<a - 1<<std::endl;
    std::string c;
    std::cin >> c;
    if (c.length() == 1 && c[0] >= 48 && c[0] <= a + 47)
        print_full_cont((int)c[0]);
    else
        std::cout <<"Wrong index"<<std::endl;

}
std::string read_line_par(std::string type)
{
    std::cout << type << std::endl;
    std::string line;
    std::cin >> line;
    while (line.empty())
    {
        std::cout << "You ndter empty line. " << type << std::endl;
        std::cin >> line;
    }
    return line;
}
void PhoneBook::add_cont()
{
    if (count > 8)
    {
        std::cout << "You already have 8 contacts. Can't add any more" << std::endl;
        return;
    }
    std::cout << "Pls fill next parameters. Empty line is forbidden"<< std::endl;
    this->contacts[count].first_name = read_line_par("First name");
    this->contacts[count].last_name = read_line_par("Last name");
    this->contacts[count].nick_name = read_line_par("Nick name");
    this->contacts[count].login = read_line_par("Login");
    this->contacts[count].postal_adress = read_line_par("Postal adress");
    this->contacts[count].birth_date = read_line_par("Birth date");
    this->contacts[count].fav_meal = read_line_par("Favourite meal");
    this->contacts[count].underwear_color = read_line_par("Underwear color");
    this->contacts[count].scret = read_line_par("Secret");
    std::cout << this->contacts->login << std::endl;
    count++;
    this->contacts[count].index = count;
}

PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{
}