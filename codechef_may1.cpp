#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t,x1,x2,x3,v1,v2;

cin>>t;
while(t--)
{
cin>>x1>>x2>>x3>>v1>>v2;

if(float(x3-x1)/v1<float(x2-x3)/v2)
cout<<"Chef"<<endl;
else if(float(x3-x1)/v1>float(x2-x3)/v2)
cout<<"Kefa"<<endl;

else
cout<<"Draw"<<endl;

}

return 0;
}

