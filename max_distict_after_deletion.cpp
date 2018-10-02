#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int temp1=0;
	    int temp2=0;
	    int arr[n];
	    map<int ,int> my_map;
	    priority_queue<int> pq;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	   my_map[arr[i]]++;
	    }
	    
	  // map<int,int >::iterator it;
	 
 
    // inserting frequency of each element in 'pq'
    for (auto it = my_map.begin(); it != my_map.end(); it++)
        pq.push(it->second);
 
    while (k--) {
 
        // get the top element of 'pq'
        int temp = pq.top();
 
        // remove top element from 'pq'
        pq.pop();
 
        // decrement the popped element by 1
        temp--;
 
        // if true, then push the element in 'pq'
        if (temp != 0)
            pq.push(temp);
    }
 
    // required maximum distinct elements
    cout<<(int)pq.size()<<endl;
	}
	return 0;
}
