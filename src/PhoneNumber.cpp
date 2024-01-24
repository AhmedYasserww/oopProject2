#include "PhoneNumber.h"
#include <iostream>
#include <string>
PhoneNumber::PhoneNumber()
{

}
PhoneNumber::PhoneNumber(string phone, string type) {
    set_phoone(phone);
    set_type(type);
}
void PhoneNumber::set_phoone(string p)
{
    phone = p;
}

void PhoneNumber ::set_type(string t)
{
    type = t;
}
string PhoneNumber::get_phoone()
{
    return phone;
}
string PhoneNumber::get_type()
{
    return type;
}
PhoneNumber::~PhoneNumber()
{
}
void PhoneNumber::colect_phone()
{

    cout << "Please Enter phone: ";
    cin >> phone;
    cout << "Please Enter the type : ";
    cin >> type;
}
void PhoneNumber::print_data()
{
    cout << "the phone is " << phone <<endl ;
    cout << " the type is  " << type;
}
