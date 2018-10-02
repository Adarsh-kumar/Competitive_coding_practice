#include<iostream>
using namespace std;
#define R 3
#define C 3
#define INT_MAX

int minimal(int x, int y, int z)
{
   return std::min(std::min(x, y), z);
}
 

//bottom up dp approach to solve the problem
int min_cost(int cost[R][C],int source_x,int source_y,int dest_x,int dest_y)
{
int mat[R][C];
for(int i=0;i<=dest_x;i++)
{
for(int j=0;j<=dest_y;j++)
{
if(i==0 && j==0)
mat[i][j]=cost[i][j];
else if(i==0)
mat[i][j]=mat[i][j-1]+cost[i][j];
else if(j==0)
mat[i][j]=mat[i-1][j]+cost[i][j];
else
mat[i][j]=minimal(mat[i-1][j],mat[i-1][j-1],mat[i][j-1])+cost[i][j];
}
}
cout<<mat[dest_x][dest_y];
return 0;
}

int main()
{
   int cost[R][C]= { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   min_cost(cost,0,0,2,2);
   return 0;
}
