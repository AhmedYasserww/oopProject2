#include "Contact.h"
#include "PhoneNumber.h"
#include <string>
#include<iostream>
using namespace std;

Contact :: Contact(){
    phones = new PhoneNumber[5];
    phone_counter = 0;
}
Contact::~Contact()
{
}

void Contact::setDetailes()//INPUT
{
   
    
    cout << "Please Enter first name : ";
    cin >> first_name;
    set_first_name(first_name);
    cout << "Please Enter last name : ";
    cin >> last_name;
    set_last_name(last_name);
    cout << "Please Enter id :";
    cin >> id;
    set_id(id);
    cout << "Please Enter gender : ";
    cin >> gender;
    set_gender(gender);
    cout << "Please Enter email : ";
    cin >> email;
    set_email(email);
    cout << "PLease Enter city : ";
    cin >> city;
    set_city(city);
    cout << "Please Enter note : ";
    cin >> note;
    set_note(note);
   
    string phone, type;
    int counter;
    cout << " How many phone numbers  : ";
    cin >> counter;
    for (int i = 1; i <= counter; i++) {
        cout <<"Please Enter Your PHONE NUMBER :";
        cin >> phone;
        cout << "Please Enter PHONE NUMBER TYPE :";
        cin >> type;
        PhoneNumber* new_phone = new PhoneNumber(phone, type);
        phones[phone_counter] = *new_phone;
        phone_counter++;
    }
    cout << "please Enter the day : ";
    cin >> day;
    cout << "Please Enter the month : ";
    cin >> month;
    cout << "Please Enter the year :  ";
    cin >> year;

    cout << "SAVED...... ";
}
   void Contact::display_detailes()
{
    cout << "NAME OF USER IS : " << first_name << " " << last_name << endl;
    cout << "THE ID IS : " << id << endl;
    cout << "THE EMAIL IS : " << email << endl;
    cout << "THE GENDER IS : " << gender << endl;
    cout << "THE CITY IS : " << city << endl;
    cout << "THE NOTE IS : " << note<<endl;
    for (int i = 0; i < phone_counter; i++)
    {
        phones[i].print_data();
        cout << endl;
    }
    
    cout << " THE DATE IS : " << day << "/" << month << "/" << year << endl;
    cout << "--------------------------------------\n";
}

void Contact::set_id(int idi)
{
    id = idi;
}

void Contact::set_first_name(string f)
{
    first_name = f;
}
string Contact::getFirstName()
{
    return first_name;
}
void Contact::set_last_name(string l)
{
    last_name = l;
}
string Contact::getLastName()
{
    return last_name;
}
void Contact::set_email(string e)
{
    email = e;
}
string Contact::get_email()
{
    return email;
}
void Contact::set_city(string c)
{
    city = c;
}
string Contact::get_city()
{
    return city;
}
void Contact::set_gender(string g)
{
    gender = g;
}
string Contact::get_gender()
{
    return gender;
}
void Contact::set_note(string n)
{
    note = n;
}
string Contact::get_note()
{
    return note;
}
int Contact:: get_id()
{
    return id;
}
