#include<iostream>
using namespace std;
#define R 3
#define C 3


int minimal(int x, int y, int z)
{
   return std::min(std::min(x, y), z);
}
 
int min_cost(int a[R][C],int source_x,int source_y,int dest_x ,int dest_y)
{
if(source_x==dest_x && source_y==dest_y)
return (a[source_x][source_y]);
else if(dest_x==0)
return (min_cost(a,source_x,source_y,dest_x,dest_y-1)+a[dest_x][dest_y]);
else if (dest_y==0)
return (min_cost(a,source_x,source_y,dest_x-1,dest_y)+a[dest_x][dest_y]);
else
return(minimal(min_cost(a,source_x,source_y,dest_x-1,dest_y),min_cost(a,source_x,source_y,dest_x-1,dest_y-1),min_cost(a,source_x,source_y,dest_x,dest_y-1))+a[dest_x][dest_y]);
}

 
/* Driver program to test above functions */
int main()
{
   int cost[R][C]= { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   cout<<min_cost(cost,0,0,2,2);
   return 0;
}
