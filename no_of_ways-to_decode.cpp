#include<iostream>
using namespace std;

int numDecodings(string A) {
int a=A.size();
int dp[a];
dp[0]=1;
for(int i=1;i<a;i++)
{
    if(A[i-1]*10+A[i]>26)
    dp[i]=dp[i-1];
    else
    dp[i]=dp[i-1]+1;
}
return A[1];
}

int main()
{
string a="14";
cout<<numDecodings(a)<<" ";
return 0;
}

