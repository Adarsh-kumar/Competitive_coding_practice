#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;

cin>>s;

int hour=stoi(s.substr(0,2));
int min=stoi(s.substr(3,2));

int inc;

cin>>inc;

int h=inc/60;
int m=inc%60;

hour+=h;
min+=m;

if(min>=60)
{
hour+=1;
min%=60;
}

hour%=24;

if(hour<10)
cout<<0;
cout<<hour;

cout<<':';

if(min<10)
cout<<0;

cout<<min;


return 0;
}

