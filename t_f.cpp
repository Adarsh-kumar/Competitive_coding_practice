#include<bits/stdc++.h>

using namespace std;

long long get_ans(long long t1,long long f1,long long t2,long long f2,long long a,long long b)
{

long long ans;
if(t1==t2)
ans=abs(f1-f2);
else if(f1<=a)
ans=((a-f1)+abs(t2-t1)+abs(f2-a));
else if(f1>=b)
ans=((f1-b)+abs(t2-t1)+abs(f2-b));
else
ans=abs(t2-t1)+abs(f2-f1);

return ans;
}




int main()
{
long long n,h,a,b,k;

cin>>n>>h>>a>>b>>k;

long long t1,f1,t2,f2;

for(int i=0;i<k;i++)
{
cin>>t1>>f1>>t2>>f2;
cout<<get_ans(t1,f1,t2,f2,a,b)<<endl;
}

return 0;
}

