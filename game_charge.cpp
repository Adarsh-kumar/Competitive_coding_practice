#include<bits/stdc++.h>
using namespace std;


int main()
{
int a,b;
cin>>a>>b;

int ans=0;

while(a>0&&b>0)
{
if(a>b)
{
b+=1;
a-=2;
if(a>=0)
ans++;
}
else
{
b-=2;
a+=1;
if(b>=0)
ans++;
}

}



cout<<ans<<endl;

return 0;
}
