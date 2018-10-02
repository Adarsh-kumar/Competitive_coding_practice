#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n,m;
cin>>n>>m;
string s1[n];
string s2[n];

for(int i=0;i<n;i++)
cin>>s1[i]>>s2[i];

int final_count=0;
bool flag1=0;
bool flag2=0;

for(int i=0;i<n;i++)
{
int count=0;
if(s1[i]=="correct")
{
for(int l=0;l<m;l++)
{
if(s2[i][l]=='1')
count++;
}
if(count!=m)
{
flag1=1;
}
}
else
{
for(int l=0;l<m;l++)
{
if(s2[i][l]=='1')
count++;
}
if(count==m)
{
flag2=1;
}
}
}

if(flag1==0&&flag2==0)
cout<<"FINE"<<endl;
else if(flag1==0)
cout<<"WEAK"<<endl;
else
cout<<"INVALID"<<endl;

}

return 0;
}


