#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,m,k;
int no_words;
int word_id;
while(scanf("%d%d%d",&n,&k,&m)!=EOF)
{
string dict[n];
int price[n];
string sentence[m];
for(int i=0;i<n;i++)
cin>>dict[i];
for(int i=0;i<n;i++)
cin>>price[i];
for(int i=0;i<k;i++)
{
cin>>no_words;
int words[no_words];
int mini=INT_MAX;
int min_price=mini;
for(int j=0;j<no_words;j++)
{
cin>>words[j];
min_price=min(mini,price[words[j]-1]);
mini=min_price;
}
for(int j=0;j<no_words;j++)
price[words[j]-1]=min_price;
}

for(int i=0;i<m;i++)
cin>>sentence[i];
int ans=0;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(sentence[i]==dict[j])
{
ans+=price[j];
break;
}
}
}

cout<<ans<<endl;
}
return 0;
}





