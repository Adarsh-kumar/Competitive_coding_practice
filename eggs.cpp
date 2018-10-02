#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

bool flag=1;

int temp1=0,temp2=0;
string ans="";

for(int i=0;i<n;i++)
{
int u,v;
cin>>u>>v;

if(u<=v&&abs(temp1+u-temp2)<=500)
{
temp1+=u;
ans+="A";
}

else if(v<=u&&abs(temp1-(temp2+v))<=500)
{
temp2+=v;
ans+="G";
}

else if(u<=v&&abs(temp2+v-temp1)<=500)
{
temp2+=v;
ans+="G";
}

else if(v<=u&&abs(temp1+u-(temp2))<=500)
{
temp1+=u;
ans+="A";
}

else
{
flag=0;
}

}

if(flag)
cout<<ans<<endl;
else
cout<<-1<<endl;

return 0;
}

