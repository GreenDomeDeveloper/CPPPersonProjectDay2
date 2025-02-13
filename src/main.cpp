#include "Person.hpp"
#include <iostream>
using namespace std;

int main() {
    Person p1;
    Person p2("Mary Johnson",21);

    cout << p1.getName() << " is " << p1.getAge() << " years old."<<endl;
    cout << p2.getName() << " is " << p2.getAge() << " years old."<<endl;

    p1.setAge(60);
    p1.setName("Bob Williams");
    p2.hasBirthday();

    cout << "\nAfter updates ..."<<endl;
    cout << p1.getName() << " is " << p1.getAge() << " years old."<<endl;
    cout << p2.getName() << " is " << p2.getAge() << " years old."<<endl;

    return 0;
} 