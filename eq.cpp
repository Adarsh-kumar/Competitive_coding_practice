#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,d;
cin>>n>>d;


int no;
cin>>no;

for(int i=0;i<no;i++)
{
int u,v;
cin>>u>>v;

int d1=abs(u+v-n);
int d2=abs(u+v-(2*n-d));
int d3=abs(u-v);
int d4=abs(v-u);


if(pow(d1+d2,2)/2==2*(n-d)*(n-d)&&pow(d3+d4,2)/2==2*d*d)

cout<<"YES"<<endl;

else
cout<<"NO"<<endl;

}

return 0;
}

