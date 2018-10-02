#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
long long n;
cin>>n;
string number;
number=std::to_string(n);
//check if we can convert by just 
int size=number.size()-1;
if(size<1)
cout<<0<<endl;
else if((number[size]-48+number[size-1]-48)%25==0)
cout<<0<<endl;
else if(number[size-1]=='2'||number[size-1]=='5'||number[size-1]=='7's)
{
if(number[size-1]=='2'||number[size-1]=='7')
{
for(int i=size-2;i>=0;i++)
{
if(number[i]=='5')
{
swap(number[i],number[size-1]);
break;
}
}
}
else if(number[size-1]=='5')
{
for(int i=size-2;i>=0;i++)
{
if(number[i]=='0')
{
swap(number[i],number[size-1]);
break;
}
}
}


return 0;
}

