#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
string s;
cin>>s;

int c,sm,no;
c=0;
sm=0;
no=0;

for(int i=0;i<s.size();i++)
{
if(s[i]>=65&&s[i]<=90)
c++;
else if(s[i]>=97&&s[i]<=122)
sm++;
else
no++;
}

if(c!=0&&sm!=0&&no!=0)
cout<<s<<endl;

else 
{


