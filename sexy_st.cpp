#include<bits/stdc++.h>
using namespace std;


bool comp(string s1,string s2)
{
int size1=s1.size();
int size2=s2.size();

if(size1<size2&&s1==s2.substr(0,size1))
{
if(s2.substr(
}


else
{
if(s1<s2.substr(size1,size2-size1))
return s1<s2;
else
return s2<s1;
}

}

else if(size2<size1&&s2==s1.substr(0,size2))
{

if(s1.size()>=2*s2.size())
{
if(s2<s1.substr(size2,size2))
return s2<s1;
else
return s1<s2;
}


else
{
if(s2<s1.substr(size2,size1-size2))
return s2<s1;
else
return s1<s2;
}

}

else
return s1<s2;
}

int main()
{

int n;
cin>>n;

string arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n,comp);



for(int i=0;i<n;i++)
cout<<arr[i];



return 0;
}

