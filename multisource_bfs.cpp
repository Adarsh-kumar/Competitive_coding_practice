#include<bits/stdc++.h>
using namespace std;

int main()
{
long long x1,y1;
long long x2,y2;
cin>>x1>>y1>>x2>>y2;
long long d1=abs(x1-x2);
long long d2=abs(y1-y2);

long long dist=min(d1,d2);

long long dist2=max(d1,d2);

long long ans=dist+(dist2-dist);

cout<<ans<<endl;

return 0;
}

