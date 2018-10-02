#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
typedef struct coin
{
int value;
int weight;
}coin ;

void minimum_money(coin coins[],int weight,int n)
{
int dp[n][weight+1];
for(int i=0;i<n;i++)
{
for(int j=0;j<=weight;j++)
{
if(j==0)
dp[i][j]=0;
else if(i==0)
{
if(j%coins[i].weight==0)
dp[i][j]=coins[i].value*(j/coins[i].weight);
else
dp[i][j]=0;
}
else  if(j-coins[i].weight>=0)
dp[i][j]=min(dp[i-1][j],coins[i].value+dp[i][j-coins[i].weight]);
else
dp[i][j]=dp[i-1][j];
}
}
if(dp[n-1][weight])
cout<<"The minimum amount of money in the piggy-bank is "<<dp[n-1][weight]<<"."<<endl;
else
cout<<"This is impossible.";
}

int main()
{
int T,initial_weight,final_weight,no_of_coins;
cin>>T;
while(T)
{
cin>>initial_weight>>final_weight;
cin>>no_of_coins;
coin coins[no_of_coins];
for(int i=0;i<no_of_coins;i++)
cin>>coins[i].value>>coins[i].weight;
minimum_money(coins,final_weight-initial_weight,no_of_coins);
T--;
}

return 0;
}

