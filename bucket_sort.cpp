#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
float arr[]={0.78,0.55,0.98,0.54,0.28};

int n=sizeof(arr)/sizeof(arr[0]);

vector<float> a[n];

for(int i=0;i<n;i++)
{
a[int(n*arr[i])].push_back(arr[i]);
}

for(int i=0;i<n;i++)
{
sort(a[i].begin(),a[i].end());
}

int i=0;
for(int j=0;j<n;j++)
{
int k=a[j].size();
while(k)
{
arr[i]=a[j][k];
i++;
k--;
}
}

for(int i=0;i<n;i++)
cout<<float(arr[i])<<endl;

return 0;
}


