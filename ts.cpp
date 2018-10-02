#include<bits/stdc++.h>
using namespace std;



double func(long long arr[],long long speed[],int n,double x)
{ 
double ans=0.0;
for(int i=0;i<n;i++)
ans=max(ans,double(abs(x-arr[i]))/speed[i]);

return ans;
}


double ts(long long arr[],long long speed[],int n,double start, double end)
{
    double l = start, r = end;

    for(int i=0; i<500; i++) {
      double l1 = (l*2+r)/3;
      double l2 = (l+2*r)/3;
      //cout<<l1<<" "<<l2<<endl;
      if(func(arr,speed,n,l1) < func(arr,speed,n,l2)) r = l2; else l = l1;
      }

     double x = l;
    return func(arr,speed,n,x);
}


int main()
{
int n;
cin>>n;
long long arr[n];
long long speed[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

for(int i=0;i<n;i++)
{
cin>>speed[i];
}

double start=1.0;

double end=1000000000.0;
std::cout << std::fixed;
std::cout << std::setprecision(9) <<ts(arr,speed,n,start,end);

return 0;
}

