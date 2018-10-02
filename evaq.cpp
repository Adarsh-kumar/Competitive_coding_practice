#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef node
{
chat key;
int freq;
}node;


int main()
{
int t,value;
cin>>t;
int n;
map<int ,int > my_map;
map<int,int > map2;
while(t--)
{
cin>>n;
node arr[n];

for(int i=0;i<n;i++)
{
cin>>value;
my_map['A'+i]=value;
my_map[value]++;
}





