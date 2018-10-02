#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef struct node
{
int x,y;
}node;

using namespace std;
int main()
{
int n;
string moves;
cin>>n>>moves;

node man;
man.x=0;
man.y=0;

bool prev=0;
int ans=0;

for(int i=0;i<moves.size();i++)
{
if(i==0)
{
if(moves[i]=='U')
{
man.y++;
prev=1;
}
else
man.x++;
}
else if(man.x==man.y)
{
if(moves[i]=='R')
man.x++;
else
man.y++;
if(man.x>man.y&&prev==1)
{
ans++;
prev=0;
}
else if(man.y>man.x&&prev==0)
{
ans++;
prev=1;
}
}
else
{
if(moves[i]=='R')
man.x++;
else
man.y++;
}
}

cout<<ans<<endl;
return 0;
}

