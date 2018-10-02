#include<bits/stdc++.h>
using namespace std;int a[100005],u[100005],d[100005];
int i,n,m,j;

int main()
{
    cin>>n>>m;
memset(a,0,sizeof(a));
memset(u,0,sizeof(u));
memset(d,0,sizeof(d));

u[1]=1;
d[1]=1;

    for(i=1;i<=n;i++) cin>>a[i];
    for(i=2;i<=n;i++) if(a[i-1]>=a[i]) u[i]=u[i-1]+1; else u[i]=1;
    for(i=n-1;i<=1;i--) if(a[i+1]>=a[i]) d[i]=d[i+1]+1; else d[i]=1;
    while(m--){
    cin>>i>>j;
    puts(d[i]+u[j]>j-i ? "Yes\n"  :  "No\n");
    }
}
