#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,count;
while(scanf("%d",&n)!=EOF)
{
int boy[n];

for(int i=0;i<n;i++)
cin>>boy[i];
cin>>m;
int girl[m];

for(int j=0;j<m;j++)
cin>>girl[j];

sort(boy,boy+n);
sort(girl,girl+m);

int i=0,j=0;

while(i<n&&j<m)
{
if(abs(boy[i]-girl[j])<=1)
{
count++;
i++;
j++;
}
else
{
if(boy[i]<girl[j])
i++;
else
j++;
}
}

cout<<count<<endl;
}

return 0;

}


