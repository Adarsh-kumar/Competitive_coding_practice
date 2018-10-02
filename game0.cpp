#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=14;

long long  arr[14];

for(int i=0;i<14;i++)
cin>>arr[i];

long long pick=INT_MIN;

int pick_index=-1;

for(int i=0;i<14;i+=2)
{
if(arr[i]>pick)
pick_index=i;
pick=max(arr[i],pick);

}

if(pick>0)
{
long long q=pick/14;
int r=pick%14;

long long score=q*7;

if(r%2==0)
score+=r/2;
else
score+=r/2+1;

for(int i=1;i<14;i+=2)
score+=arr[i];

cout<<score<<endl;

}
else
{

for(int i=1;i<14;i+=2)
{
if(arr[i]>pick)
pick_index=i;
pick=min(arr[i],pick);

}

long long q=pick/14;
long long r=pick%14;

long long score=q*7;


score+=r/2;


for(int i=1;i<14;i+=2)
score+=arr[i];

score-=arr[pick_index];

cout<<score<<endl;


}

return 0;
}


