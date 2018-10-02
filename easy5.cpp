#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int u,v;
int count1=0;
int count2=0;

for(int i=0;i<n;i++)
{

cin>>u>>v;

if(u<v)
count2++;
else if(v<u)
count1++;

}

if(count1==count2)
cout<<"Friendship is magic!^^"<<endl;

else if(count1>count2)
cout<<"Mishka"<<endl;

else
cout<<"Chris"<<endl;

return 0;
}

