#include "PhoneNumber.h"
#include <string>
#include<iostream>

using namespace std;
class Contact
{
private:
    long long id;
    string first_name;
    string last_name;
    string email;
    string city;
    string gender;
    string note;
    int number;
    int phone_counter;
    int day;
    int month;
    int year;
    PhoneNumber* phones;
public:
    
    Contact();

    ~Contact();
    void setDetailes();
    void display_detailes();

    void set_id(int idi);
    void set_first_name(string f);
    void set_last_name(string l);
    void set_email(string e);
    void set_city(string c);
    void set_gender(string g);
    void set_note(string n);   
    int get_id();
    string getFirstName();
    string getLastName();
    string get_email();
    string get_city();
    string get_note();
    string get_gender();
};

