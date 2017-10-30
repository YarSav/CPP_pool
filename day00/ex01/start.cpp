//#include "Contact.hpp"
#include "PhoneBook.hpp"
int main()
{
    PhoneBook phoneBook;
    std::string str;

    phoneBook.count = 0;
    std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - eit and remove all contacts" << std::endl;
    while ((std::cin >> str))
    {
        if (str.compare("ADD") == 0)
            phoneBook.add_cont();
        if (str.compare("SEARCH") == 0)
            phoneBook.search_cont();
        if (str.compare("EXIT") == 0)
            break;
        std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - eit and remove all contacts" << std::endl;
    }

}