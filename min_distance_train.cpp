#include<iostream>
using namespace std;
#define INF 5000
#define N 4
int minCost(int cost[N][N])
{
int dp[N];
dp[0]=0;
for(int i=1;i<N;i++)
{
dp[i]=cost[0][i];
for(int j=0;j<N;j++)
{
if(cost[0][j]+cost[j][i]<dp[i])
dp[i]=cost[0][j]+cost[j][i];
}
}
return dp[N-1];
}






int main()
{
    int cost[N][N] = { {0, 15, 80, 90},
                      {INF, 0, 40, 50},
                      {INF, INF, 0, 70},
                      {INF, INF, INF, 0}
                    };
    cout << "The Minimum cost to reach station "
          << N << " is " << minCost(cost);
    return 0;
}
