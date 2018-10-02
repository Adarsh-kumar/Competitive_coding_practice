#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

typedef struct node
{
int x,y;
}node;

bool comp(node a ,node b)
{
return(abs(a.x+a.y)>abs(b.x+b.y));
}


int main()
{
int n;
cin>>n;
node arr[n];
long long ans=0;
for(int i=0;i<n;i++)
{
cin>>arr[i].x>>arr[i].y;
ans+=2*(abs(arr[i].x)+abs(arr[i].y));
//arr[i].x=abs(arr[i].x);
//arr[i].y=abs(arr[i].y);
}
ans+=2*n;
cout<<ans<<endl;

for(int i=0;i<n;i++)
{
int temp=0;
while(temp<abs(arr[i].x))
{
temp+=(arr[i]-x);
if(arr[i].x>0)
cout<<1<<" "<<arr[i-x]<<" "<<'R'<<endl;
else
cout<<1<<" "<<abs(arr[i-x])<<" "<<'L'<<endl;
}


int temp2=0;

while(temp2<abs(arr[i].y))
{
temp2++;
if(arr[i].y>0)
cout<<1<<" "<<1<<" "<<'U'<<endl;
else
cout<<1<<" "<<1<<" "<<'D'<<endl;
}


cout<<2<<endl;

while(temp>0)
{
if(arr[i].x>0)
cout<<1<<" "<<1<<" "<<'L'<<endl;
else
cout<<1<<" "<<1<<" "<<'R'<<endl;
temp--;
}

while(temp2>0)
{
if(arr[i].y>0)
cout<<1<<" "<<1<<" "<<'D'<<endl;
else
cout<<1<<" "<<1<<" "<<'U'<<endl;
temp2--;
}

cout<<3<<endl;

}

return 0;
}

