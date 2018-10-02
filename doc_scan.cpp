#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin>>t;
int s1,s2,n;
int time=0;
int temp_time=0;
int max_time;

while(t--)
{
cin>>s1>>s2>>n;
int min_time=min(s1,s2);
if(s1==min_time)
max_time=s2;
else
max_time=s1;

int l=1;
int r=n;
time=0;
temp_time=0;
while(l<r)
{
l++;
time+=min_time;
temp_time+=min_time;
if(temp_time>=max_time)
{
r--;
temp_time=temp_time-max_time;
}
}
if(l==r)
time+=min(max_time-temp_time,min_time);
cout<<time<<endl;

}
return 0;
}


