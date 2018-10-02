#include<iostream>
#include<bits/stdc++.h>

using namespace std;





int main()
{
int t,n,b,g;
cin>>t;
while(t--)
{
    cin>>n;
    cin>>b>>g;
    int minimum=min(b,g);
    int maximum=max(b,g);
    
    if(minimum<maximum-minimum)
    cout<<"Little Jhool wins!"<<endl;
    else
    cout<<"The teacher wins!"<<endl;
    }
    return 0;
}
