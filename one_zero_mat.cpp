#include<iostream>
using namespace std;
#define bool int
#define R 6
#define C 5


int counter(int a[R][C])
{
int dp[R][C];
for(int i=0;i<R;i++)
{
for(int j=0;j<C;j++)
{
if(i==0||j==0)
dp[i][j]=a[i][j];
else






int main()
{
  bool M[R][C] =  {{0, 1, 1, 0, 1}, 
                   {1, 1, 0, 1, 0}, 
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}};
                
  printMaxSubSquare(M);
  getchar();  
}  
