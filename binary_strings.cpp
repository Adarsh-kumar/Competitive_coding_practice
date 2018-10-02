#include<iostream>
using namespace std;

int no_of_strings(int n)
{
int dp[n+1];
dp[0]=0;
dp[1]=2;
int prev0=1;
int prev1=1,cur0,cur1;
for(int i=2;i<=n;i++)
{
cur0=prev0+prev1;
cur1=prev0;

prev0=cur0;
prev1=cur1;
}
return (cur0+cur1);
}

int main()
{
int n;
cin>>n;
cout<<"total strings "<<no_of_strings(n);
return 0;
}


