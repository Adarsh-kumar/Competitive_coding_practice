#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int no_of_path(int n,int m,string bad[],int size)
{
//initialize a matrix 
int* arr[n+1];
for(int i=0;i<=n;i++)
{
arr[i]=new int [m+1];
}
//cout<<bad[0];


//bottomup solution 
for(int i=0;i<=n;i++)
{
for(int j=0;j<=m;j++)
{
if(i==0&&j==0)
arr[i][j]=1;
else 
{
if(j==0)
arr[i][j]=arr[i-1][j];
else if(i==0)
arr[i][j]=arr[i][j-1];
/*else if(i==0&&j==1)
arr[i][j]=0;
else if(i==6&&j==6)
arr[i][j]=arr[6][5];*/
else
arr[i][j]=arr[i-1][j]+arr[i][j-1];
}
}
}

return arr[n][m];

}

int main()
{
int n=6,m=6;
string s[]={"0 0 0 1","6 6 5 6"};
cout<<no_of_path(4,3,s,2);
return 0;
}

