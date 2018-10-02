#include<iostream>
using namespace std;
#define NUM_LINE 2
#define NUM_STATION 4

int min(int a, int b) { return a < b ? a : b; }

int min_cost_finder_dp(int a[][NUM_STATION],int t[][NUM_STATION],int e[],int x[])
{
int dp1[NUM_STATION-1];
int dp2[NUM_STATION-1];
for(int i=0;i<=NUM_STATION-1;i++)
{
if(i==0)
{
dp1[i]=e[i]+a[0][i];
dp2[i]=e[1]+a[1][i];
}
else 
{
dp1[i]=min(dp1[i-1]+a[0][i],dp2[i-1]+t[1][i]+a[0][i]);
dp2[i]=min(dp2[i-1]+a[1][i],dp1[i-1]+t[0][i]+a[1][i]);
}
}
return (min(dp1[NUM_STATION-1]+e[0],dp2[NUM_STATION-1]+e[1]));
//return(min(dp1[NUM_STATION-2]+min(t[0][NUM_STATION-1]+a[1][NUM_STATION-1]+e[1],a[0][NUM_STATION-1]+e[0]),dp2[NUM_STATION-2]+min(t[1][NUM_STATION-1]+a[0][NUM_STATION-1]+e[0],a[1][NUM_STATION-1]+e[1])));
}
int main()
{
    int a[][NUM_STATION] = {{4, 5, 3, 2},
                {2, 10, 1, 4}};
    int t[][NUM_STATION] = {{0, 7, 4, 5},
                {0, 9, 2, 8}};
    int e[] = {10, 12}, x[] = {18, 7};
 
     cout<<min_cost_finder_dp(a, t, e, x);
 
    return 0;
}
