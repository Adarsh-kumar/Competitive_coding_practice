#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define N 100000
string arr[N];
long long s[N];
long long h[N];
long long sh[N];

long long s_counter(string a)
{
long long s_count;
for(int i=0;i<a.size();i++)
{
if(a[i]=='s')
s_count++;
}
return s_count;
}

long long h_counter(string a)
{
long long h_count;
for(int i=0;i<a.size();i++)
{
if(a[i]=='h')
h_count++;
}
return h_count;
}


bool comparator(string a,string b)
{
long long sa=s_counter(a);
long long sb=s_counter(b);
long long ha=h_counter(a);
long long hb=h_counter(b);

if(min(sa,hb)<min(sb,ha))
return(b<a);
else
return (a<b);
}


int main()
{
int n;
cin>>n;
string arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
s[i]=0;
h[i]=0;
}

sort(arr,arr+n,comparator);
for(int i=0;i<n;i++)
cout<<arr[i];

return 0;
}






