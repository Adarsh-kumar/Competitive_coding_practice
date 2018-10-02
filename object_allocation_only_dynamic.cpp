#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student
{
private:
int roll_no;
string name;
private :
~student()
{
};
public:
student()
{
this->roll_no=15165002;
this->name="ADARSH";
}
//we should add a friend function to manually delete the dynamically allocated object
friend void destruct(student* );
};
void destruct(student* ptr)
{
    delete ptr;
}
int main()
{
//object allocation at compile time 
//student adarsh;
//object allocation at run time but this may cause memory leak since the normal pointers doesn't gets destructed
//we should use a smart pointer
student* adarsh1=new student;
destruct(adarsh1);
//cout<<adarsh1->roll_no<<endl;
return 0;
}


