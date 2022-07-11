// Testing1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Person.h"
#include <vector>

void AddPerson(std::vector<Person*>& p)
{
    std::string name;
    std::string lastname;
    std::string address;
    std::string city;
    std::string state;
    std::string zipcode;

    Person* person = new Person();
    std::cout << "Please enter the information for your person" << '\n';
    std::cout << "First name: ";
    std::cin.ignore(INT_MAX, '\n');
    getline(std::cin, name);
    std::cout << "Last name: ";
    getline(std::cin, lastname);
    std::cout << "Address: ";
    getline(std::cin, address);
    std::cout << "City: ";
    getline(std::cin, city);
    std::cout << "State: ";
    getline(std::cin, state);
    std::cout << "Zipcode: ";
    getline(std::cin, zipcode);

    std::string* Name = &name;
    std::string* Lastname = &lastname;
    std::string* Address = &address;
    std::string* City = &city;
    std::string* State = &state;
    std::string* Zipcode = &zipcode;

    person->SetName(Name);
    person->SetLastName(Lastname);
    person->SetAddress(Address);
    person->SetCity(City);
    person->SetState(State);
    person->SetZipcode(Zipcode);

    p.push_back(person);
}
void Print(std::vector<Person*>& p)
{
    if (p.size() == 0)
    {
        Person person;
        person.Display();
    }
    else
    {
        for (int i = 0; i < p.size(); i++)
        {
            p[i]->Display();
        }
    }

}

int main()
{
    std::vector<Person*> p;
    bool booly = true;
    while (booly)
    {
        std::cout << "Hello There! What would you like to do? \n";
        std::cout << "1. Create a Person 2. List People 3. Exit \n" << '>';
        int choice;
        std::cin >> choice;
        system("CLS");
        switch (choice)
        {
        case 1:
            AddPerson(p);
            system("CLS");
            break;
        case 2:
            Print(p);
            //system("CLS");
            break;
        default:
            std::cout << "Good bye now!";
            booly = false;
            break;
        }
    }





}

#pragma region myTrash
/* ;

std::cout << "Please enter your first name: ";
getline(std::cin, name);
system("CLS");
std::cout << "Please enter your last name: ";
getline(std::cin, lastname);
system("CLS");
std::cout << "Please enter your Address: ";
getline(std::cin, address);
system("CLS");
std::cout << "Please enter the city you live in: ";
getline(std::cin, city);
system("CLS");
std::cout << "Please enter your state: ";
getline(std::cin, state);
system("CLS");
std::cout << "Please enter your zipcode: ";
getline(std::cin, zipcode);
system("CLS");

std::cout<< "Person's name: " << name<< ' ' << lastname<< '\n' << "The person's address: " << address << ", " << city << ", " << state << ", " << zipcode;
std::cout << '\n' << '\n' << '\n' << '\n';*/
#pragma endregion