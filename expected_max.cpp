#include<bits/stdc++.h>

using namespace std;

float get_prob(int n,int m)
{
long long d=pow(n,m);

float ans=0.0;

int u=1;
for(int i=1;i<=n;i++)
{
ans+=(i*(float(u)/d));
u+=2;
}

return ans;
}



int main()
{
int n,m;
cin>>n>>m;

float ans=get_prob(n,m);

cout<<ans<<endl;
return 0;
}




