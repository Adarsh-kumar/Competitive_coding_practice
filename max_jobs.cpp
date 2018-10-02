#include<iostream>
#include<bits/stdc++.h>
#define m 6
#define N 6

int arr[N];

using namespace std;

map<string ,int > my_map;

int main()
{
int n;
for(int i=0;i<N;i++)
cin>>arr[i];

cin>>n;

for(int i=0;i<n;i++)
cin>>arr[i];

int bgraph[n][m];

memset(match,-1,sizeof(match));


