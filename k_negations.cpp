#include<bits/stdc++.h>
#include <queue>
using namespace std;

int k_negations(int arr[],int n,int k)
{
std::priority_queue<int, std::vector<int>, std::greater<int> > pq;

for(int i=0;i<n;i++)
pq.push(arr[i]);

cout<<"its top  " <<pq.top();
while(k-->0)
{
int temp = pq.top();
pq.pop();
 
            // Modify the minimum element and add back
            // to priority queue
            temp *= -1;
            pq.push(temp);

        }

int sum = 0;
    while(!pq.empty())
{
int temp=pq.top();
cout<<temp<<" ";
pq.pop();
sum+=temp;
}
        return sum;
    }

int main()
{
int arr[] = {-2, 0, 5, -1, 2};
int n=sizeof(arr)/sizeof(arr[0]);
        int k = 4;

cout<<k_negations(arr,n,k);
return 0;
}
