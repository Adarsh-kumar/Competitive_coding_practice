#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct train
{
int arival_time;
int dept_time;
}train;

bool comp(train a ,train b)
{
return(a.arival_time<b.arival_time);
}


int minimum_platform(train trains[],int n)
{
sort(trains,trains+n,comp);
//sort(trains,trains+n,comp);

int ans=1;
for(int i=0;i<n-1;i++)
{
if(trains[i+1].arival_time<trains[i].dept_time)
ans++;
}

return ans;
}

int main()
{
train trains[]={{900,910},{940,1200},{950,1120},{1100,1130},{1500,1900},{1800,2000}};
int n = sizeof(trains)/sizeof(trains[0]);
    cout << "Minimum Number of Platforms Required = "
         << minimum_platform(trains, n);
    return 0;
}
