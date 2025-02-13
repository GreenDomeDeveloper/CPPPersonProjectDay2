#ifndef PERSON_HPP
#define PERSON_HPP

#include<string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person();
        Person(string, int);
        string getName();
        int getAge();
        void setName(string);
        void setAge(int);
        void hasBirthday();

};

#endif