#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	map<int ,int> mp;
	int t,n;
	int temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        mp[arr[i]]=i;
	    }
	    
	    int arr2[n];
	    int temp2=0;
	    for(auto it=mp.begin();it!=mp.end();it++)
{
arr2[it->second]=temp2;
temp2++;
}
for(int i=0;i<n;i++)
cout<<arr2[i]<<" ";

cout<<endl;
	}
	
	return 0;
}
