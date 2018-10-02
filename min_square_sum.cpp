#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_square(int no)
{
if(no==0)
return 0;
else if(no==1)
return 1;

else 
{
int sq=sqrt(no);
no-=sq*sq;
return (1+min_square(no));
}
}

int min_square_dp(int no)
{
int dp[no+1];
for(int i=0;i<=no;i++)
{
if(i<=3)
dp[i]=i;
else
{
int sq=sqrt(i);
dp[i]=1+dp[i-sq*sq];
}
}
return dp[no];
}

int main()
{
int n;
cin>>n;
cout<<min_square_dp(n);
return 0;
}

