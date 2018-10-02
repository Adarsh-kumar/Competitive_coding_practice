#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
int i;
for(i=0;i<=64;i++)
{
if(pow(2,i)>n)
break;
}

cout<<i<<endl;

return 0;
}

