#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

typedef struct point
{
int x;
int y;
}point;

float slope;

void line_finder(point a[],int n)
{
int total=((n)*(n-1))/2;
float slope[total];
int k=0;
    /*for(int i=0;i<n;i++)
        cout<<a[i].x<<" "<<a[i].y<<" ";
    cout<<endl;*/
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
    if((a[j].x-a[i].x)!=0)
slope[k]=float(a[j].y-a[i].y)/(a[j].x-a[i].x);
    else
        slope[k]=500;
k++;
}
}
    /*for(int i=0;i<total;i++)
        cout<<slope[i]<<" ";
    cout<<endl;*/
int temp=slope[0];
int count=1;
for(int p=0;p<n,p++)
{
for(int q=p+1;q<total;q++)
{
if(slope[p]!=temp)
{
temp=slope[p];
count++;
}
}
if(count==2)
cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}




int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
point points[n];
for(int i=0;i<n;i++)
cin>>points[i].x>>points[i].y;
line_finder(points,n);
}
return 0;
}


