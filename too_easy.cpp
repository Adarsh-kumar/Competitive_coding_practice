#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
int index;
int time;
int points;
}node;

bool comparator(node a,node b)
{
return(a.points>b.points);
}

int main()
{
int n,t;
cin>>n>>t;
node arr[n];
int temp,temp_time;
int i;
for(i=0;i<n;i++)
{
cin>>temp>>arr[i].time;
arr[i].index=i;
if(temp>=i+1)
arr[i].points=1;
else
arr[i].points=0;
}
sort(arr,arr+n,comparator);
i=0;
int j=-1;
int ans=0;
int temp_ans=0;
vector<int> ans_vector;
while(i<n)
{
temp_time=0;
temp_ans=0;
while(j<n&&arr[j+1].time+temp_time<=t)
{
j++;
temp_ans+=arr[j].points;
temp_time+=arr[j].time;
}
if(temp_ans>ans)
{
ans_vector.clear();
for(int ii=i;ii<=j;ii++)
ans_vector.push_back(arr[ii].index);
}
ans=max(temp_ans,ans);
temp_time-=arr[i].time;
i++;
}

cout<<ans<<endl;
cout<<ans_vector.size()<<endl;
for(int ii=0;ii<ans_vector.size();ii++)
cout<<ans_vector[ii]+1<<" ";

return 0;
}

