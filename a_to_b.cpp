#include<bits/stdc++.h>
using namespace std;

long long minimum_cost(long long n,long long k,long long A,long long B)
{
//int dp[n+1];
//dp[0]=0;
if(n<k)
return(A*(n-1));
else if(n%k==0)
{
if(B<(n-n/k)*A)
return(minimum_cost(n/k,k,A,B)+B);
else
return((n-1)*A);
}
else 
{
return(A*(n%k)+minimum_cost(n-n%k,k,A,B));
}
}

int   main()
{
int n,k,A,B;
cin>>n>>k>>A>>B;
cout<<minimum_cost(n,k,A,B)<<endl;
return 0;
}
