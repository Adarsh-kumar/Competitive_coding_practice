#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
string a,b,c;

int maxa=INT_MIN;
int maxb=INT_MIN;
int maxc=INT_MIN;

cin>>a>>b>>c;

int freqa[100],freqb[100],freqc[100];

for(int i=0;i<100;i++)
{
freqa[i]=0;
freqb[i]=0;
freqc[i]=0;
}

for(int i=0;i<a.size();i++)
freqa[a[i]-48]++;
for(int i=0;i<b.size();i++)
freqb[b[i]-48]++;
for(int i=0;i<c.size();i++)
freqc[c[i]-48]++;

for(int i=0;i<100;i++)
{
maxa=max(maxa,freqa[i]);
maxb=max(maxb,freqb[i]);
maxc=max(maxc,freqc[i]);
}

if(n>=a.size())
maxa=n;
if(n>=b.size())
maxb=n;
if(n>=c.size())
maxc=n;


int maximum=max(max(maxa,maxb),maxc);

if(((maxa==maximum)&&(maxc==maximum))||((maxa==maximum)&&(maxb==maximum))||((maxb==maximum)&&(maxc==maximum)))
{
cout<<"Draw";
return 0;
}



if(maximum==maxa)
cout<<"Kuro"<<endl;
else if(maximum==maxb)
cout<<"Shiro"<<endl;
else
cout<<"Katie"<<endl;

cout<<freqa['A'-48]<<endl;
return 0;
}



