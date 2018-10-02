#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int x;
int index;
}node;

bool comp(node a,node b)
{
return(a.x<b.x);
}

int binary_search(node arr[],int val,int n)
{
int lo=0;
int hi=n;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid].x==val)
return arr[mid].index;

else if(arr[mid].x>val)
hi=mid;

else
lo=mid+1;

}

return arr[lo].index;
}

bool comp2(pair<int,int> a,pair<int,int> b)
{
    return(a.first<b.first);
}

int main()
{
int n,m;
cin>>n>>m;

node arr[n];


for(int i=0;i<n;i++)
{
cin>>arr[i].x;
arr[i].index=i;
}

sort(arr,arr+n,comp);

vector<pair<int,int > > ans;


while(m--)
{
int u,v;

cin>>u>>v;

int l=binary_search(arr,u,n);
int r=binary_search(arr,v,n);


    if(l<r)

    {
ans.push_back(make_pair(l,1));
ans.push_back(make_pair(r,-1));
    }

    else
    {

ans.push_back(make_pair(l,-1));
ans.push_back(make_pair(r,1));
    
}

}


sort(ans.begin(),ans.end(),comp2);
int count=1;
int index=ans[0].first;

int i=1;

vector<pair<int,int> > ans2;

while(i<ans.size())
{
count=1;
while(count!=0)
{
count+=ans[i].second;
i++;
}

ans2.push_back(make_pair(index,ans[i-1].first));
index=ans[i].first;
i++;
}

long long sub=0;

long long total_rm=0;

long long final_ans=0;

for(int i=0;i<ans2.size();i++)
{
int len=(ans2[i].second-ans2[i].first)+1;

int actual=n-ans2[i].first;

long long total=(len*(len+1))/2;

total_rm+=(total-(actual-len));

}

final_ans=(n*(n+1))/2;

final_ans-=total_rm;

for(int i=0;i<ans.size();i++)
cout<<ans[i].first<<" ";

for(int i=0;i<ans2.size();i++)
cout<<ans2[i].first<<" "<<ans2[i].second<<endl;

cout<<final_ans<<endl;

return 0;
}



