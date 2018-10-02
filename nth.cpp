#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
//	queue<string> q;
	
	//q.push(std::to_string(7));
	string temp1,temp2;
	int t,n;
cin>>t;
	while(t--)
	{
	    cin>>n;
	    queue<string> q;
	    q.push("");
	while(n+1)
	{
	    temp1=q.front();
	    temp2=temp1;
	    
	    q.push(temp1.append("4"));
	    q.push(temp2.append("7"));
             
            //cout<<q.front()<<endl;
          n--;
          if(n!=0)
	    q.pop();
	    
	    
	    
	}
	cout<<q.front()<<endl;
	}
	return 0;
}
