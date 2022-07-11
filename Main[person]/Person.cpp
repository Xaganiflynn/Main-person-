#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

string* name;
string* lastname;
string* address;
string* city;
string* state;
string* zipcode;

Person::Person()
{
	/*SetName("Roberto");
	SetLastName("Alicontrer");
	SetAddress("1234 Main Street");
	SetCity("Sitey City");
	SetState("Mental State");
	SetZipcode("12345");*/
}

Person::~Person()
{
}

string* Person::GetName()
{
	return name;
}

string* Person::GetLastName()
{
	return lastname;
}

string* Person::GetAddress()
{
	return address;
}

string* Person::GetCity()
{
	return city;
}

string* Person::GetState()
{
	return state;
}

string* Person::GetZipcode()
{
	return zipcode;
}

void Person::SetName(string* _name)
{
	name = _name;
}

void Person::SetLastName(string* _lastname)
{
	lastname = _lastname;
}

void Person::SetAddress(string* _address)
{
	address = _address;
}

void Person::SetCity(string* _city)
{
	city = _city;
}

void Person::SetState(string* _state)
{
	state = _state;
}

void Person::SetZipcode(string* _zipcode)
{
	zipcode = _zipcode;
}

void Person::Display()
{
	std::cout << GetName() << ' ' << GetLastName() << ", " << GetAddress() << ", " << GetCity() << ", " << GetState() << ", " << GetZipcode() << "." << '\n';
}
