#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,a,b;

cin>>n>>m>>a>>b;

int count=0;

if(13*a<=12*b)
{
cout<<-1;
return 0;
}

while(n<m)
{
if(n+5*a>=m)
break;
else
{
n+=13*a;
n-=12*b;
count++;
}
}

cout<<count<<endl;

return 0;
}

