#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define COL 5

bool is_safe(int i,int j,int m)
{
if((i>=0 && i<m )&&( j>=0 && j<COL))
return 1;
else
return 0;
}

int largestRegion(int m[][COL],int i,int j,int p)
{
if(!is_safe(i,j,p))
return 0;
else
return (m[i][j]+max(max(largestRegion(m,i-1,j,p),largestRegion(m,i,j-1,p)),max(largestRegion(m,i+1,j,p),largestRegion(m,i,j+1,p))));
}
int main()
{
    int M[][COL] = { {0, 0, 1, 1, 0},
                     {1, 0, 1, 1, 0},
                     {0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 1}};
    int n=4;
    cout << largestRegion(M,0,0,4);
 
    return 0;
}
