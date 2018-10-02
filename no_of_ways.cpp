#include<iostream>
#include<algorithm>
using namespace std;

#define R 4
#define C 4
 

int no_of_ways(int a[R][C])
{
int dp[R][C];
for(int i=0;i<R;i++)
{
for(int j=0;j<C;j++)
{
if(i==0&&j==0)
dp[i][j]=0;
else if(j==0)
{
if(i==1)
{
if(a[i][j]!=-1)
dp[i][j]=1;
else
dp[i][j]=0;
}
else
{
if(a[i][j]!=-1)
dp[i][j]=dp[i-1][j];
else
dp[i][j]=0;
}
}
else if(i==0)
{
if(j==1)
{
if(a[i][j]!=-1)
dp[i][j]=1;
else
dp[i][j]=0;
}
else
{
if(a[i][j]!=-1)
dp[i][j]=dp[i][j-1];
else
dp[i][j]=0;
}
}
else
{
if(a[i][j]!=-1)
dp[i][j]=dp[i-1][j]+dp[i][j-1];
else
dp[i][j]=0;
}
}
}
return dp[R-1][C-1];
}

int main()
{ 
    int maze[R][C] =  {{0,  0, 0, 0},
                       {0, -1, 0, 0},
                       {-1, 0, -1, 0},
                       {0,  0, 0, 0}};
    cout << no_of_ways(maze);
    return 0;
}



