#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,k;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	   
	    int arr[n];

	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	   cin>>k;


	    if(n%2!=0)
	    {
	        cout<<"False"<<endl;
	        continue;
	    }
	   
	   map<int,int> my_map;
	   
	   for(int i=0;i<n;i++)
	   my_map[arr[i] %k]++;

	   bool flag=1;
	   
	   for(int i=0;i<k;i++)
	   {
	   if(i==0&&(!my_map[i]&1))
           {
flag=0;
break;
}
else if(i*2==k&&(!my_map[i]&1))
{
flag=0;
break;
}
else if(my_map[i]!=(my_map[k-i]))
{
flag=0;
break;
}
}
if(flag)
cout<<"True"<<endl;
else
cout<<"False"<<endl;
}
	return 0;
}
