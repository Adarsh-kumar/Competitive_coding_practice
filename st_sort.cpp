#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool flag=1;

bool comp(string a,string b)
{
/*if(a.size()==b.size())
{
if(!(a==b))
flag=0;
}
else
{
if(a.size()<b.size())
{
if (b.find(a) != std::string::npos)
flag=0;
}
else
{
if(!a.find(b)!=std::string::npos)
flag=0;
}
}
if(a.size()==b.size())
return (a<b);*/
return (a.size()<b.size());
}



int main()
{
int n;
cin>>n;
string arr[n];
string temp;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n,comp);
for(int i=1;i<n;i++)
{
if(arr[i].find(arr[i-1])==std::string::npos)
{
flag=0;
break;
}
}
if(flag)
{
cout<<"YES"<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
}
else
cout<<"NO"<<endl;
return 0;
}



