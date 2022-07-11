#pragma once
#include <string>

using namespace std;

class Person
{
    /*std::string _name;
    std::string _lastname;
    std::string _address;
    std::string _city;
    std::string _state;
    std::string _zipcode;*/
public:

    Person();
    ~Person();

    string* GetName();
    string* GetLastName();
    string* GetAddress();
    string* GetCity();
    string* GetState();
    string* GetZipcode();

    void SetName(string* _name);
    void SetLastName(string* _lastname);
    void SetAddress(string* _address);
    void SetCity(string* _city);
    void SetState(string* _state);
    void SetZipcode(string* _zipcode);

    void Display();
};

