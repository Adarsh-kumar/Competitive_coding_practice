#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct job{
int id,time;
}job;

bool comp(job a,job b)
{
return (a.time<b.time);
}

int sjf(job* arr,int n)
{
sort(arr,arr+n,comp);
int waiting_time=0;
int prev_time;
for(int i=0;i<n;i++)
{
prev_time=waiting_time;
if(i!=0)
{
waiting_time+=arr[i-1].time;
waiting_time+=prev_time;
}
}
return (waiting_time/n);
}

int main()
{
    job jobs[] = {{1, 6}, {2, 8}, {3, 7}, {4, 3}};
    int n = sizeof jobs / sizeof jobs[0];
 
    // Sorting processes by burst time.
    //sort(proc, proc + n, comparison);
 
    //cout << "Order in which process gets executed\n";
    //for (int i = 0 ; i < n; i++)
        //cout << proc[i].pid <<" ";
 
    cout<<sjf(jobs, n);
    return 0;
}

