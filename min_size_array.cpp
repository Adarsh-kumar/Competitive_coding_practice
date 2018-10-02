#include<bits/stdc++.h>
using namespace std;

int lenghtOfLongestAP(int arr[],int n)
{
int diff=20;
int dp[n][diff];
memset(dp,0,sizeof(dp));

for(int i=0;i<n;i++)
{
for(int j=0;j<diff;j++)
{
dp[i][j]=1;

if(i!=0)
{
for(int k=i-1;k>=0;k--)
{
if(arr[i]-arr[k]==j)
{
dp[i][j]=max(dp[i][j],1+dp[k][j]);
break;
}
}
}

}
}

int ans=0;
for(int i=0;i<diff;i++)
{
ans=max(ans,dp[n-1][i]);
}

return ans;
}


int main()
{
    int set1[] = {1, 7, 10, 13, 14, 19};
    int n1 = sizeof(set1)/sizeof(set1[0]);
    cout <<   lenghtOfLongestAP(set1, n1) << endl;
 
    int set2[] = {1, 7, 10, 15, 27, 29};
    int n2 = sizeof(set2)/sizeof(set2[0]);
    cout <<   lenghtOfLongestAP(set2, n2) << endl;
 
    int set3[] = {2, 4, 6, 8, 10};
    int n3 = sizeof(set3)/sizeof(set3[0]);
    cout <<   lenghtOfLongestAP(set3, n3) << endl;
 
    return 0;
}

