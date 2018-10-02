#include<iostream>
#include<bits/stdc++.h>

char arr[100][100];
using namespace std;
bool flag=0;

bool is_safe(int i,int j,int n,int m)
{
int count=0,temp_count=0;
if(arr[i][j]!='.')
count=arr[i][j]-48;
//check all

if(j!=0&&arr[i][j-1]=='*')
temp_count++;

if(j!=m-1&&arr[i][j+1]=='*')
temp_count++;

if(i!=n-1&&arr[i+1][j]=='*')
temp_count++;

if(i!=0&&arr[i-1][j]=='*')
temp_count++;

if((i!=0&&j!=0)&&arr[i-1][j-1]=='*')
temp_count++;

if((i!=n-1&&j!=m-1)&&arr[i+1][j+1]=='*')
temp_count++;

if((i!=n-1&&j!=0)&&arr[i+1][j-1]=='*')
temp_count++;

if((i!=0&&j!=m-1)&&arr[i-1][j+1]=='*')
temp_count++;


return(temp_count==count);
}

//check all the neighbours
//corner case
/*if(i==0&&j==0)
{
if(arr[i+1][j]=='*')
temp_count++;
if(arr[i][j+1]=='*')
temp_count++;
if(arr[i+1][j+1]=='*')
temp_count++;
}
else if(i==0&&j==m-1)
{
if(arr[i-1][j]=='*')
temp_count++;
if(arr[i][j-1]=='*')
temp_count++;
if(arr[i-1][j-1]=='*')
temp_count++;
}
else if(i==n-1&&j==0)
{
if(arr[i-1][j+1]=='*')
temp_count++;
if(arr[i][j+1]=='*')
temp_count++;
if(arr[i-1][j]=='*')
temp_count++;
}
else if(i==n-1&&j==m-1)
{
if(arr[i-1][j-1]=='*')
temp_count++;
if(arr[i][j-1]=='*')
temp_count++;
if(arr[i-1][j]=='*')
temp_count++;
}*/
//side cases 



int main()
{
int n,m;
cin>>n>>m;

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if((arr[i][j]!='*'))
{
if(!is_safe(i,j,n,m))
{
cout<<"no"<<endl;
flag=1;
return 0;
}
}
}
}
if(!flag)
cout<<"yes"<<endl;

return 0;
}




