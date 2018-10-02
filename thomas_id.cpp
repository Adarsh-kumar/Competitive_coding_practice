#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int p,q,r,s;
int t_marks;
int marks;

for(int i=0;i<n;i++)
{
cin>>p>>q>>r>>s;
marks=p+q+r+s;
arr[i]=marks;
if(i==0)
t_marks=marks;
}

sort(arr,arr+n,std::greater<int>());

for(int i=0;i<n;i++)
{
if(arr[i]==t_marks)
{
cout<<i+1<<endl;
break;
}
}

return 0;
}

