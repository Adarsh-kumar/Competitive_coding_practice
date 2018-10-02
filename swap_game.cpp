#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool comparator(int x,int y)
{
return (x>y);
}

int main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int motu[n];
int tomu[n];
bool flag=0;
int tomu_count,motu_count;
if(n%2==0)
motu_count=n/2;
else
motu_count=n/2+1;


tomu_count=n-motu_count;

int j=0,k=0;
for(int i=0;i<n;i++)
{
if(!flag)
{
cin>>motu[j];
j++;
flag=1;
}
else
{
cin>>tomu[k];
k++;
flag=0;
}
}
sort(motu,motu+motu_count,comparator);
sort(tomu,tomu+tomu_count);
int i=0;
j=0;
while(k--&&i<motu_count)
{
if(motu[i]>tomu[i])
{
swap(tomu[i],motu[i]);
i++;
}
else
break;
}
int sum_motu=0;
int sum_tomu=0;

for(int i=0;i<motu_count;i++)
{
sum_motu+=motu[i];
}

for(int i=0;i<tomu_count;i++)
{
sum_tomu+=tomu[i];
}

if(sum_tomu>sum_motu)
cout<<"YES"<<endl;
else
cout<<"N0"<<endl;
}

}




