#include <iostream>
#include <string>
#include "Contact.h"
class ContactBook
{
private:
    int count, size, delete1, edit1, Search;
    Contact* users;
public:
    ContactBook();
    ContactBook(int count);
    void addUser();
    void deleteUser();
    void searchUser();
    void editUser();
    void printAll();

    void setCount(int count);
    int getCount();
    virtual ~ContactBook();

};