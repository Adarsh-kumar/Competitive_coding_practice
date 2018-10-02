#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int largestSumOfAverages(vector<int> A,int k)
{
//similar to minium no of multiplications required in matrix chain 
int n=A.size();

dp[n][n];

for(int size=0;size<n;size++)
{
for(int i=0;i<n;i++)
{
int j=i+size;
if(i==j)
dp[i][j]=A[i];
else
dp[i][j]=INT_MIN;
for(int k=0;k<j&&j<n;j++)
{
dp[i][j]=max(











int main()
{
    vector<int> A = { 9, 1, 2, 3, 9 };
    int K = 3; // atmost partioning size
    cout << largestSumOfAverages(A, K) << endl;
    return 0;
}
