#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=4;
string arr[n];
for(int i=0;i<4;i++)
cin>>arr[i];
int l[4];

bool flag=0;

l[0]=arr[0].size()-2;
l[1]=arr[1].size()-2;
l[2]=arr[2].size()-2;
l[3]=arr[3].size()-2;


int count=0;
string ans="ABCD";

for(int j=0;j<4;j++)
{
count=0;
if(flag)
break;
for(int k=0;k<4;k++)
{
if(l[k]>=2*l[j])
count++;
}
if(count==3)
{
cout<<ans[j]<<endl;
flag=1;
break ;
}
}


//cout<<"here"<<endl;
for(int j=0;j<4;j++)
{
count=0;
if(flag)
break;
for(int k=0;k<4;k++)
{
if(2*l[k]<=l[j])
count++;
}
if(count==3)
{
cout<<ans[j]<<endl;
flag=1;
break ;
}
}

if(flag==0)
cout<<'C'<<endl;
return 0;
}


