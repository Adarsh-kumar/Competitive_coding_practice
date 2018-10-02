#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sp[1000001];
vector<int> get_digits(int n)
{
int i=0;
while(int(n/pow(10,i))!=0)
i++;
vector<int> ans;
i--;
while(i>=0)
{
ans.push_back(n/pow(10,i));
n%=int(pow(10,i));
i--;
}
return ans;
}

void set_sp()
{
sp[0]=1;
memset(sp,0,sizeof(sp));
for(int i=0;i<8;i++)
{
sp[int(pow(i,i))]=1;
}
}

bool get_results(int n)
{
if(n<0)
return 0;
if(sp[n])
return 1;
vector<int> ans=get_digits(n);
if(ans.size()==1)
return sp[n];
for(int i=0;i<ans.size();i++)
{
int b;
if(ans[i]!=0)
b=get_results(n-pow(ans[i],2));
else
b=0;
if(b==1)
return 1;
}
return 0;
}

int main()
{
int t,n;
cin>>t;
set_sp();
while(t--)
{
cin>>n;
if(get_results(n))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;


}

return 0;
}


