#include<bits/stdc++.h>
using namespace std;

int main()
{
char arr[10][10];

for(int i=0;i<10;i++)
{
for(int j=0;j<10;j++)
{
cin>>arr[i][j];
}
}

for(int i=0;i<10;i++)
{
for(int j=0;j<10;j++)
{
if(arr[i][j]=='X')
break;
}
}

if(i+5<10)
{
if(arr[i][
