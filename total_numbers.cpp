#include<iostream>
using namespace std;

int no_of_numbers(int l)
{
int digits=10;
int ans=0;
int dp[l+1][digits];
//int dpfinal[l+1];
for(int len=1;len<=l;len++)
{
//dpfinal[len]=0;
for(int digit=0;digit<digits;digit++)
{
dp[len][digit]=0;
if(len==1)
dp[len][digit]=1;
else
{
for(int j=0;j<=digit;j++)
dp[len][digit]+=dp[len-1][j];
}

}
}
for(int i=0;i<digits;i++)
ans+=dp[l][i];
return ans;
}

int main()
{
    int n = 3;
//cin>>n;
    cout << no_of_numbers(6);
    return 0;
}

