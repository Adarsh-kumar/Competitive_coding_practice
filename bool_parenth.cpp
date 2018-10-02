#include<iostream>
using namespace std;

int bool_parenth(int* symbol,char* operators,int n,int m)
{
int dp[n]={0};
for(int i=0;i<n;i++)
{
int count1=0;
int count0=0;
for(int j=0;j<m;j++)
{
if(i==0)
{
dp[i]=0;
break;
}
else
{
if(operators[j]=='&')
{
if(symbol[i]==1)
count1++;
}
else if(operators[j]=='|')
{
count1++;
if(symbol[i]==1)
count0++;
}
else if (operators[j]=='^')
{
if(symbol[i]==0)
count1++;
else
count0++;
}
}
}
if(dp[i-1]!=0)
dp[i]=dp[i-1]*count1+(m-1-dp[i-1])*count0;
else
dp[i]=count1+count0;
}
return dp[n-1];
}

int main()
{
    int symbols[] = {1,1,0,1};
    char operators[] = "|&^";
    int n = sizeof(symbols)/sizeof(symbols[0]);
    int m=sizeof(operators)/sizeof(operators[0]);
 
    // There are 4 ways
    // ((T|T)&(F^T)), (T|(T&(F^T))), (((T|T)&F)^T) and (T|((T&F)^T))
    cout << bool_parenth(symbols, operators, n,m);
cout<<" "<<m;
    return 0;
}

