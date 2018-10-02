#include<bits/stdc++.h>
using namespace std;

int min_cost_reverse(string arr[],int cost[],int n)
{
int dp[n][2];
string arr2[n];

for(int i=0;i<n;i++)
{
arr2[i]=arr[i];
reverse(arr2[i].begin(),arr2[i].end());
}

dp[1][0]=0;
dp[1][1]=cost[0];

for(int i=1;i<n;i++)
{
for(int j=0;j<2;j++)
{
dp[i][j]=INT_MAX;
int current_cost;
string current_string;
if(j==0)
current_cost=0;
else
current_cost=cost[i];
if(j==0)
current_string=arr[i];
else
current_string=arr2[i];

if(current_string>=arr[i-1])
dp[i][j]=min(dp[i][j],dp[i-1][0]+current_cost);
if(current_string>=arr2[i-1])
dp[i][j]=min(dp[i][j],dp[i-1][1]+current_cost);

}
}
int res=min(dp[n-1][0],dp[n-1][1]);
return (res == INT_MAX)? -1 : res;
}

int main()
{
    string arr[] = {"aa", "ba", "ac"};
    int cost[] = {1, 3, 1};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    int res = min_cost_reverse(arr, cost, N);
    if (res == -1)
        cout << "Sorting not possible\n";
    else
        cout << "Minimum cost to sort strings is "
             << res;
}









