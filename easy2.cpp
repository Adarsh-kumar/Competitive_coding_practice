#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,x,s;
cin>>t;
while(t--)
{
cin>>n>>x>>s;
int current=x;
while(s--)
{
int a,b;
cin>>a>>b;
if(a==current)
current=b;
else if(b==current)
current=a;
}

cout<<current<<endl;

}

return 0;
}

