#include<iostream>
#include<bits/stdc++.h>
#define M 4
#define N 3
using namespace std;
int dp[10][10][10];

bool is_safe(int i,int j)
{
if(i>=0&&i<3 && j>=0&&j<4)
return 1;
else
return 0;
}

int get_count(char argv[][3],int i,int j,int k)
{
if(dp[i][j][k]!=-1)
return dp[i][j][k];

if(!is_safe(i,j))
return 0;

for(int s=0;s<3;i++)
{
for(int e=0;e<4;e++)
{
for(int k=0;k<10;k++)
{
if(k==0)
{
dp[s][e][k]=0;
return dp[s][e][k];
}
if(k==1)
{
if(argv[s][e]!='*' || argv[s][e]!='#')
dp[s][e][k]=1;
else
dp[s][e][k]=0;
}
else
{
dp[s][e][k]=0;
if(is_safe(s-1,e))
dp[s][e][k]+=get_count(argv,s-1,e,k-1);
if(is_safe(s,e+1))
dp[s][e][k]+=get_count(argv,s,e+1,k-1);
if(is_safe(s+1,e))
dp[s][e][k]+=get_count(argv,s+1,e,k-1);
if(is_safe(s,e-1))
dp[s][e][k]+=get_count(argv,s,e-1,k-1);
}

}
}
}

int ans=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<4;j++)
{
ans+=dp[i][j][k];

}
}
return ans;
}

int get_count_helper(char arr[][3],int n)
{
int dp[10][10][10];
memset(dp,-1,sizeof(dp));
return get_count(arr,0,0,n);
}


int main()
{
   char keypad[4][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};
   cout<<"total ways"<<get_count_helper(keypad,3);
 
   return 0;
}

