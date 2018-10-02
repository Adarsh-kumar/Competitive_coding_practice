#include<bits/stdc++.h>

using namespace std;

int get_lo(int n)
{

for(int i=1;i<25;i++)
{
if(pow(2,i)==n)
return n;
}

for(int i=1;i<25;i++)
{
for(int j=1;j<25;j++)
{
if(pow(2,i)+pow(2,j)==n)
return pow(2,min(i,j));
}
}

return 2;

}

int main()
{
int sum,limit;
cin>>sum>>limit;

bool flag=1;
int arr[25];

int arr2[25];

arr[0]=0;
arr2[0]=1;

for(int i=1;i<25;i++)
{
arr[i]=(2*i);
}

for(int i=1;i<25;i++)
arr2[i]=(2*i)+1;

vector<int> ans;


int l,r;
l=1;
r=0;

while(sum-get_lo(arr[l])>0&&arr[l]<=limit)
{

sum-=get_lo(arr[l]);
ans.push_back(arr[l]);
l++;
}

while(sum>0&&arr2[r]<=limit)
{
sum-=1;
ans.push_back(arr2[r]);
r++;
}

if(sum>0)
flag=0;

if(flag==1)
{
cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++)
{
cout<<ans[i]<<" ";
}
}


else
cout<<-1<<endl;

return 0;
}



