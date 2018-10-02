#include<bits/stdc++.h>

using namespace std;

int main()
{
int n=5;
int temp=0;

for(int i=0;i<n;i++)
{
int temp2;
cin>>temp2;
temp+=temp2;
}

if(temp%5==0)
cout<<temp/5<<endl;

else
cout<<-1<<endl;
return 0;}
