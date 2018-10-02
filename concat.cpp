#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;

string arr[n];

vector<int> *arr;
arr=new vector<int>[m];

vector<int> *prefix;
prefix=new vector<int>[m];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

for(int i=0;i<m;i++)
{
int size;
for(int j=0;j<size;j++)
{
int temp;
cin>>temp;
arr[i].push_back(temp);
if(j==0)
prefix[i].push_back(arr[temp].size());
else
prefix[i].push_back(arr[temp].size()+prefix[i][j-1]);
}
}

int q;

cin>>q;

while(q--)
{
int u,v;
cin>>u>>v;


