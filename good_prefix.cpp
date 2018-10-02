#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t)
{
string s;
int n;

cin>>s>>n;
string temp=s;
int count_a=0,count_b=0;
for(int i=1;i<n;i++)
temp.append(s);

int a_count[temp.size()],b_count[temp.size()];
for(int i=0;i<temp.size();i++)
{
if(temp[i]=='a')
{
count_a++;
a_count[i]=count_a;
b_count[i]=count_b;

}
else
{
count_b++;
b_count[i]=count_b;
a_count[i]=count_a;
}
}
int ans=0;
for(int i=0;i<=temp.size()-1;i++)
{
if(a_count[i]>b_count[i])
ans++;
}

cout<<ans<<endl;
t--;
}
return 0;
}

