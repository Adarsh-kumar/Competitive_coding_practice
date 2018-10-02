#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t,n,m,x,y;
cin>>t;

while(t--)
{
cin>>n>>m>>x>>y;
n-=1;
m-=1;

long long  temp1=n%x;
long long temp2=m%y;

if(temp1==0&&temp2==0)
cout<<"Chefirnemo"<<endl;

else if(temp1==1&&temp2==1)
cout<<"Chefirnemo"<<endl;

else if(temp1==0&&n!=0&&x==1&&temp2==1)
cout<<"Chefirnemo"<<endl;

else if(temp2==0&&m!=0&&y==1&&temp1==1)
cout<<"Chefirnemo"<<endl;

else
cout<<"Pofik"<<endl;

}

return 0;
}

