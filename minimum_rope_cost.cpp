#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int minimum_cost(int arr[],int n)
{
sort(arr,arr+n);
int ans=arr[0]+arr[1];
int ans2=ans;
for(int i=2;i<n;i++)
{
ans+=arr[i];
ans2+=ans;
}
return ans2;
}

int minimum_cost_stl(int arr[],int n)
{
priority_queue< int, vector<int>, greater<int> > pq(arr, arr+n);
int res = 0;
 
    // While size of priority queue is more than 1
    while (pq.size() > 1)
    {
        // Extract shortest two ropes from pq
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
 
        // Connect the ropes: update result and
        // insert the new rope to pq
        res += first + second;
        pq.push(first + second);
    }
 
    return res;
}
int main()
{
    int len[] = {4, 3, 2, 6};
    int size = sizeof(len)/sizeof(len[0]);
    cout << "Total cost for connecting ropes is " << minimum_cost_stl(len, size);
    return 0;
}
