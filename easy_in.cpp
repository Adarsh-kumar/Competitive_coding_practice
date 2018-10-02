#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;

for(int i=2;i<=10;i++)
{

cout<<i;
cin>>s;

if(s=="yes")
{

for(int j=2;j<=10;j++)
{
fflush(stdout);
if(j!=i)
{
cout<<j;
cin>>s;
if(s=="yes")
{
cout<<"composite"<<endl;
fflush(stdout);
return 0;
}

}

}

}

else
{
fflush(stdout);
}

}

cout<<"prime"<<endl;

return 0;
}

