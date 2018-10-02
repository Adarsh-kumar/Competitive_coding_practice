#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int win_the_game(int n)
{
int dp[n+1];
dp[1]=1;
for(int i=2;i<=n;i++)
{
if(i%2==0)
dp[i]=1;
else
{
dp[i]=0;
for(int j=i-2;j>=1;j--)
{
if(dp[j]==0)
dp[i]=1;
}
}
}
return(dp[n]);
}



string win_the_game(int n,string name)
{
if(n==1)
return name;
else if(n%2==0)
return name;
else
{
if(name=="Alice")
return(win_the_game(n-2,"Bob"));
else
return(win_the_game(n-2,"ALice"));
}
}

int main()
{
int t;
int n;
cin>>t;
while(t)
{
cin>>n;
if(win_the_game(n))
cout<<"ALice"<<endl;
else
cout<<"Bob"<<endl;
t--;
}
return 0;
}
