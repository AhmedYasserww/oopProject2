#include "ContactBook.h"
#include <iostream>
#include <ctime>
#include <string>
ContactBook::ContactBook()
{

}
ContactBook::ContactBook(int size)
{
    this->size = size;
    users = new Contact[size];
    count = 0;
}
void ContactBook::addUser()
{
    Contact* newUser = new Contact;
    newUser->setDetailes();
    users[count] = *newUser;
    count++;
}
void ContactBook::deleteUser()
{
    if (count == 0)
    {
        cout << "No User Exists " << endl;
        return;
    }
    else
    {
        cout << "Enter ID Number of Record To Delete : " << endl;
        cin >> delete1;
        bool test = false;
        for (int i = 0; i < count; ++i)
        {
            if (users[i].get_id() == delete1)
            {
                if (i == 0)
                    count--;
                else
                {
                    users[i] = users[count - 1];
                    count--;
                }
                test = true;
                break;
            }
        }
        if (test)
            cout << "  deleted SUCESSFULLY " << endl;
        else
            cout << "\nThe  of ID Number " << delete1 << " is not in file...." << endl;
    }
}

void ContactBook::editUser()
{
    if (count == 0)
    {
        cout << "NOT  DATA FOUND.... \n";
        return;
    }
    else
    {
        cout << "Enter ID Number to Edit : " << endl;
        cin >> edit1;
        bool test = false;
        for (int i = 0; i < count; ++i)
        {
            if (users[i].get_id() == edit1)
            {
                users[i].setDetailes();
                test = true;
                break;
            }
        }
        if (test == false)
            cout << "NO USER EXIST " << endl;
    }
}

void ContactBook::searchUser()
{
    int flag = 0;
    cout << "Enter ID Number of Record To Search : " << endl;
    cin >> Search;
    for (int i = 0; i < count; i++)
    {
        if (Search == users[i].get_id())
        {
            users[i].display_detailes();
            flag = 1;
        }
       
    }
    if (flag == 0)
        cout << "THE DATA NOT FOUND " ;

   
   // users[Search-1].display_detailes();
}
void ContactBook::printAll()
{
    if (count == 0)
    {
        cout << "NO USER FOUND " << endl;
        return;
    }

    for (int i = 0; i < count; ++i)
    {
        cout << "-----------------User Info [" << i + 1 << "]------------------\n";

        users[i].display_detailes();

    }
}
void ContactBook::setCount(int count)
{
    this->count = count;
}
int ContactBook::getCount()
{
    return count;
}
ContactBook::~ContactBook()
{
    delete[]users;
}