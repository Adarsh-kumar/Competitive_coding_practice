#include<bits/stdc++.h>
using namespace std;

int go_binary(long long arr[],int k,int val)
{
int lo=0;
int hi=k;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid]==val)
return mid;

else if(arr[mid]>val)
hi=mid;
else
lo=mid+1;

}

return lo;
}


int point_calculator(long long arr[],int k,int val)
{

int lo=go_binary(sum_task,k,current);

if(sum_task[lo]>current)
{
current-=sum_task[lo-1];
point+=(lo)*k;
point+=current/arr[lo];

current=0;
}

else
{
point+=(lo+1)*k;
current=0;
}

return points;
}


int main()
{
int n,m,k;
cin>>n>>k>>m;

long long arr[k+1];
long long sum_task[k+1];

long long sum=0;

for(int i=0;i<k;i++)
{
cin>>arr[i];
sum+=arr[i];
}

sort(arr,arr+n);

for(int i=0;i<k;i++)
sum_task[i]=k*arr[i];

int current=m;


int people=0;

int point=0;

while(current>0)
{

int lo=go_binary(sum_task,k,current);

if(sum_task[lo]>current)
{
current-=sum_task[lo-1];
point+=(lo)*k;
point+=current/arr[lo];

current=0;
}

else
{
point+=(lo)*k;
current=0;
}

if(current-sum>=0)
{
long long temp=current/sum;
long long  current2=temp*current;


}
else 
{
int lo=go_binary(sum_task,k,current);



}

}

cout<<point<<endl;

return 0;
}

