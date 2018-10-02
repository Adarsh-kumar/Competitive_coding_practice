#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b;
cin>>a>>b;
int i=1;
while(a*pow(3,i)<=b*pow(2,i))
{
i++;
}

cout<<i<<endl;

return 0;}

