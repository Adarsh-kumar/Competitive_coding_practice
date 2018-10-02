#include<bits/stdc++.h>

using namespace std;

int main()
{
int x,y,s,t;
cin>>x>>y>>s>>t;

int ans=0;
for(int i=x;i<=s+x;i++)
{
for(int j=y;j<=s+y;j++)
{
if(i+j==t||(t-(i+j))>0)
ans++;
}


}

cout<<ans<<endl;

return 0;
}
