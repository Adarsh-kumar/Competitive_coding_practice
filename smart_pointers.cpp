#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Person
{
    int age;
    char* pName;

    public:
        Person(): pName(0),age(0)
        {
        }
        Person(char* pName, int age): pName(pName), age(age)
        {
        }
        ~Person()
        {
        }

        void Display()
        {
            printf("Name = %s Age = %d \n", pName, age);
        }
        void Shout()
        {
            printf("Ooooooooooooooooo",);
        } 
};

void main()
{
    Person* pPerson  = new Person("Scott", 25);
    pPerson->Display();
//manual deletion when we don't need the object
    delete pPerson;
}

