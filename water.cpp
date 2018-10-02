#include<bits/stdc++.h>
using namespace std;

int main()
{
int d,h,v,e;
cin>>d>>h>>v>>e;

if(e>v)
cout<<"NO"<<endl;

double t=double(h)/(v-e);

cout<<t<<endl;

return 0;
}

