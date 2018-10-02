#include<iostream>
using namespace std;

# define INT_MAX 1000000
int count=INT_MAX;

int matrix_chain_multiplier_dp(int* a,int i,int j)
{
int dp[i][j];
//build the dp matrix
for(int a=i,a<j;a++)
{
for(int b=a;b<j;b++)
{
if(a==b)
dp[a][b]=0;
else
dp[a][b]=


for(int k=i;k<j;k++)
{
if (i==j)
return 0;
for(int k=i;k<j;k++)
{


int matrix_chain_multiplier(int* a,int i,int j)
{
if(i==j)
return 0;
for(int k=i;k<j;k++)
{
int current_count=matrix_chain_multiplier(a,i,k)+matrix_chain_multiplier(a,k+1,j)+a[i-1]*a[k]*a[j];
if (current_count<count)
count=current_count;
}
return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Minimum number of multiplications is  "<<
                          matrix_chain_multiplier(arr, 1, n-1);
 
    //getchar();
    return 0;
}
