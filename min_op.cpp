#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	int sum=0;
	int op2=INT_MAX;
	int ans=0;
	int flag=0;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    ans=0;
	    int arr2[n];
	    sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        op2=min(arr[i],op2);
	        if(arr[i]<=1)
	        flag=1;
	        sum+=arr[i];
	        arr2[i]=0;
	        
	        
	    }
	    int temp=0;
	    while(pow(2,temp)<op2)
	    {
	        temp++;
	    }
	   // cout<<temp<<endl;
	    if(flag)
	    {
	    cout<<sum<<endl;
	    break;
	    }
	    else
	    {
	        ans+=n;
	        ans+=temp;
	        for(int i=0;i<n;i++)
	        {
	        arr2[i]+=pow(2,temp);
	        ans+=arr[i]-arr2[i];
	        }
	        
	        
	        
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
