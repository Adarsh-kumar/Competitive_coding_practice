#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int grt(int a ,int b)
{
if(a>=b)
return 0;
else
return 1;
}

int dot_finder(char arr[],int  n,int start)
{
for(int i=start;i<n;i++)
{
if(arr[i]=='.')
return i;
}
return -1;
}

int main()
{
int n,a,b;
cin>>n>>a>>b;
char arr[n];
int count=0;
for(int i=0;i<n;i++)
cin>>arr[i];

//input done
int r;

r=dot_finder(arr,n,0);
int flag=grt(a,b);
while(r<n&&r!=-1)
{
if(arr[r]=='.')
{
if(flag==0 && a>0)
{
a--;
count++;
r++;
flag=1;
}
else if(flag==0 && a==0)
{
flag=1;
r++;
}
else if(flag==1 && b>0)
{
b--;
count++;
r++;
flag=0;
}
else if(flag==1 && b==0)
{
flag=0;
r++;
}
}
else
{
r=dot_finder(arr,n,r);
flag=grt(a,b);
}
}

cout<<count<<endl;
return 0;
}

