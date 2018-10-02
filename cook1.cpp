#include<bits/stdc++.h>
using namespace std;



int main()
{
int t,n;

cin>>t;

while(t--)
{

cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int p[n];
int s[n];

p[0]=0;

if(arr[0]==2)
p[0]=1;

s[n-1]=0;
if(arr[n-1]==2)
s[n-1]=1;

bool flag=0;

int prev;

for(int i=1;i<n;i++)
{
if(arr[i]==2)
p[i]=p[i-1]+1;
else if(flag)
{
p[i]=prev+p[i-1]+1;
flag=0;
}
else 
{
flag=1;
p[i]=0;
prev=p[i-1];
}

}

flag=0;

for(int i=n-2;i>=0;i--)
{
if(arr[i]==2)
s[i]=s[i+1]+1;
else if(flag)
{
s[i]=prev+s[i+1]+1;
flag=0;
}
else 
{
flag=1;
s[i]=0;
prev=s[i+1];
}

}

int max_2=INT_MIN;
int max_1=INT_MIN;

for(int i=0;i<n;i++)
{
if(arr[i]==2)
{
max_2=max(max(p[i],s[i]),max_2);
}
else
{
if(i!=0&&i!=n-1)
max_1=max(p[i-1]+s[i+1],max_1);
else if(i==0)
max_1=max(s[i+1],max_1);
else
max_1=max(p[i-1],max_1);
}

}

cout<<max_1+max_2+1<<endl;

}

return 0;

}

