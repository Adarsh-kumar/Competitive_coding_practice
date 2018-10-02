#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[105];

int main()
{
int n,m;
cin>>m>>n;
map<int,int> my_map;

for(int i=0;i<n;i++)
{
cin>>arr[i];
my_map[arr[i]]++;
}

vector<int> arr2;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
arr2.push_back(it->second);
}

sort(arr2,arr2.begin();arr2.end());



sort(arr,arr+n);


