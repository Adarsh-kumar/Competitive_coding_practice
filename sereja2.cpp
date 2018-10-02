#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int val,index,ans;
}q;


bool comp2(q a, q b)
{
return a.index<b.index;
}


bool comp(q a,q b)
{
return a.val<b.val;
}


int main()
{
int n,m;
cin>>n>>m;

int arr[n];

map<int ,int> my_map;

for(int i=0;i<n;i++)
{
cin>>arr[i];
my_map[arr[i]]++;
}

node q[m];

for(int i=0;i<m;i++)
{
cin>>q[i].val;
q[i].val=q[i].val-1;
q[i].index=i;
}

sort(q,q+m,comp);

int prev=0;

for(int i=0;i<m;i++)
{
for(int j=prev;j<q[i].val;j++)
{
if(my_map[arr[j]]==1)
{
my_map.erase(my_map.find(arr[j]));
}
else
my_map[arr[j]]--;
}
prev=q[i].val;
q[i].ans=my_map.size();
}

sort(q,q+m,comp2);

for(int i=0;i<m;i++)
cout<<q[i].ans<<endl;
return 0;

}

