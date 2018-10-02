#include<iostream>

#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
long long cost;
long long value;
}node;

bool comp(node a,node b)
{
if((float(a.value)/a.cost)==(float(b.value)/b.cost))
return a.value<b.value;
else
return ((float(a.value)/a.cost)>(float(b.value)/b.cost));
}

int main()
{
int n;
cin>>n;
node arr[9];


for(int i=0;i<9;i++)
{
cin>>arr[i].cost;
arr[i].value=i+1;
}

sort(arr,arr+9,comp);


string ans="";

int i=0;

while(n&&i<9)
{
if(int(n/arr[i].cost)>0)
{

int temp=n/arr[i].cost;

n%=arr[i].cost;

while(temp--)
ans+=to_string(arr[i].value);

}
else
i++;
}



if(ans=="")
cout<<-1<<endl;
else
cout<<ans<<endl;

return 0;
}



