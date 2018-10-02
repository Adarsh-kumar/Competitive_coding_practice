#include<iostream>
#include<bits/stdc++.h>
#define maximum INT_MAX
using namespace std;
typedef struct point 
{
int x;
int y;
}point;


double dist(point p1, point p2)
{
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) +
                (p1.y - p2.y)*(p1.y - p2.y));
}

double cost(point points[], int i, int j, int k)
{
    point p1 = points[i], p2 = points[j], p3 = points[k];
    return dist(p1, p2) + dist(p2, p3) + dist(p3, p1);
}
// The polygon is represented by points[i..j].
double mTC(point points[], int i, int j)
{
   // There must be at least three points between i and j
   // (including i and j)
   if (j < i+2)
      return 0;
 
   // Initialize result as infinite
   double res = maximum;
 
   // Find minimum triangulation by considering all
   for (int k=i+1; k<j; k++)
        res = min(res, (mTC(points, i, k) + mTC(points, k, j) +
                        cost(points, i, k, j)));
   return  res;
}

double mTCdp(point points[],int n)
{
//int n=5;
int dp[n+1][n+1];
for(int gap=0;gap<=n;gap++)
{
for(int i=0,j=gap;j<=n;i++,j++)
{
dp[i][j]=maximum;
if(j-i<2)
dp[0][i]=0;
else
{
for(int k=i+1;k<j;k++)
{
int temp=cost(points,0,j,i);
dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+temp);
}
}
}
}
return (int(dp[0][n]));
}


int main()
{
    point points[] = {{0, 0}, {1, 0}, {2, 1}, {1, 2}, {0, 2}};
    int n = sizeof(points)/sizeof(points[0]);
    cout << mTCdp(points,n-1);
    return 0;
}




















// Driver program to test above functions

