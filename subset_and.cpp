#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[1001];

int main()
{
int t,n,z;
cin>>t;
bool flag=0;

while(t--)
{
cin>>z>>n;
flag=0;
for(int i=0;i<n;i++)
cin>>arr[i];

std::string binary ;

for(int i=1;i<pow(2,n);i++)
{
int temp=1;
binary= std::bitset<8>(i).to_string();

std::reverse(binary.begin(),binary.end());

int count=0;
for(int j=0;j<n;j++)
{
if(binary[j]=='1' && count>0)
temp &= arr[j];
else if(binary[j]=='1' && count==0)
{
count=1;
temp=arr[j];
}
//cout<<"it's temp "<<temp<<endl;
}

if(temp&z==0)
{
flag=1;
break;
}
}

if(flag)
cout<<"	YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}

