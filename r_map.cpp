#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	map<int,int> my_map;
	map<int ,int > r_map;
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int ans[n];
	    int temp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
//cout<<temp<<"its temp"<<endl;
	        my_map[temp]++;
	    }
	    for(auto it=my_map.begin();it!=my_map.end();it++)
	    {
cout<<it->first<<" "<<it->second<<endl;
	        r_map[it->second]=my_map[it->first];
	}
	int i=0;
	for(auto it=r_map.begin();it!=r_map.end();++it)
	{
    
           //cout<<it->first<<" "<<it->second<<endl;
cout<<it->first<<"its it"<<endl;
	   int temp2=it->first;
	    while(temp2--)
	    {
	        ans[i]=it->second;
cout<<i<<"it's i"<<endl;
	        i++;
	    }
	}
	
	for(int i=n-1;i>=0;i--)
	cout<<ans[i]<<" ";
	}
	
	return 0;
}
