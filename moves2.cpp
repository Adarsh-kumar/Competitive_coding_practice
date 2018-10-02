#include<bits/stdc++.h>
using namespace std;

int main()
{
int q;
cin>>q;
long long n,m,k;

while(q--)
{
cin>>n>>m>>k;

long long current;
bool flag=0;
long long temp=max(n,m);

if(n==m)
flag=1;

if(k<temp)
cout<<-1<<endl;

else
{

current=temp-1;
long long left=k-current;

if(left%2==0&&flag)
current+=(left-2);

else if(left%2==0)
current+=(left-1);

else if(left%2!=0&&flag)
current+=left;

else
current+=(left-1);

cout<<current<<endl;

}



}

return 0;
}


