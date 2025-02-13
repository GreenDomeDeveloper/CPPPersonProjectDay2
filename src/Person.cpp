#include "Person.hpp"

Person::Person()
{
    name = "John Doe";
    age = 42;
}

Person::Person(string newName, int newAge)
{
    name = newName;
    age = newAge;
}

string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

void Person::setName(string newName)
{
    name = newName;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

void Person::hasBirthday()
{
    age++;
}
