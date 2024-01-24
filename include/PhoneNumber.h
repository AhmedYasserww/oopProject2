#pragma once
#include <iostream>
#include <string>
using namespace std;
class PhoneNumber
{
private:
    string  phone;
    string type;
public:
    void colect_phone();
    void print_data();
    PhoneNumber(string phone,string tybe);
    void set_phoone(string);
    void set_type(string);
    string get_phoone();
    string get_type();
    PhoneNumber();
    ~PhoneNumber();
};