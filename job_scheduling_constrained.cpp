#include<iostream>
using namespace std;


int job_schedular(int job[],int n,int time_unit,int workers)
{
int lower_bound=6;
int heigher=500;
/*for(int i=0;i<n;i++)
{
if(job[i]<lower_bound)
lower_bound=job[i];
}*/

int assigned_workers=1;

while(lower_bound<heigher)
{
int mid=lower_bound+(heigher-lower_bound)/2;
int weight=0;
for(int i=0;i<n;i++)
{
if(weight+job[i]<=mid)
weight=weight+job[i];
else
{
assigned_workers++;
weight=job[i];
}
}

if(assigned_workers<=workers)
heigher=mid;
else
lower_bound=mid+1;
}

return lower_bound;

}

int main()
{
    int job[] =  {10, 7, 8, 12, 6, 8};
    int n = sizeof(job)/sizeof(job[0]);
    int k = 4, T = 5;
    cout << job_schedular(job,n,T,k)<< endl;
    return 0;
}

