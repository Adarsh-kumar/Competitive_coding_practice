#include<bits/stdc++.h>
using namespace std;

int minimum_cost(int n,int k,int A,int B)
{
//int dp[n+1];
//dp[0]=0;
if(n<k)
return(A*(n-1));
else if(n%k==0)
return(min(minimum_cost(n/k,k,A,B)+B,A*(n-1)));
else
return(min((n-1)*A,minimum_cost(n/k,k,A,B)+B+n%k*A));


}

int   main()
{
int n,k,A,B;
cin>>n>>k>>A>>B;
cout<<minimum_cost(n,k,A,B)<<endl;
return 0;
}
