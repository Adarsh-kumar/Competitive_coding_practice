#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class node
{
public:
int data;
int price;
public:
node(int x,int y)
{
this->data=x;
this->price=y;
}
};

/*class comparator
{
public:
    bool operator() (node a, node b)
    {
        return a.data<b.data;
    }
};*/

struct greater1{
  bool operator()(const node& a,const node& b) const{
    return a.data<b.data;
  }
};

int main()
{
priority_queue<node,vector<node>,greater1> pq;
priority_queue<node,vector<node>,greater1> rs;
int n,c,d;
cin>>n>>c>>d;
int temp1,temp2;
string temp;

for(int i=0;i<n;i++)
{
cin>>temp1>>temp2>>temp;
if(temp=="C"&&temp2<=c)
pq.push({temp1,temp2});
else if(temp=="D"&&temp2<=d)
rs.push({temp1,temp2});
}

//cout<<pq.top().data<<"it's top"<<endl;

int ans=0;
int count=0;
bool flag=0;
while(count<2)
{
if(pq.empty()&&rs.empty())
{
flag=1;
cout<<0<<endl;
break;
}
else if((!pq.empty())&&(!rs.empty()))
{
//ans+=max(pq.top().data,rs.top().data);
if(pq.top().data>rs.top().data)
{
if(pq.top().price<=c)
{
ans+=pq.top().data;
c-=pq.top().price;
}
pq.pop();
}

else if(pq.top().data<rs.top().data)
{
if(rs.top().price<=d)
{
ans+=rs.top().data;
d-=rs.top().price;
}
rs.pop();
}

count++;
}

else if(pq.empty())
{
if(rs.top().price<=d)
{
ans+=rs.top().data;
d-=rs.top().price;
count++;
}
rs.pop();
}

else if(rs.empty())
{
if(pq.top().price<=c)
{
ans+=pq.top().data;
c-=pq.top().price;
count++;
}
pq.pop();
}

}


//while(count<
if(!flag)
cout<<ans<<endl;

return 0;
}


