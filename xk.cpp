#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check_it(int x,int y)
{
if(x%y==0)
return 1;
else
return 0;
}

int main()
{
int n,k,x;
cin>>n>>k>>x;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

int l=0;
int r=-1;

int ans_count=0;

int temp=0;

int k_equal_counter=0;
while(l<n)
{
while(r<n&&(temp+check_it(x,arr[r+1])<=k))
{
r++;
temp+=check_it(x,arr[r]);
if(temp==k)
k_equal_counter++;
}
if(temp==k&&r<n)
ans_count+=k_equal_counter;
if(k_equal_counter==1)
temp-=check_it(x,arr[l]);
k_equal_counter-=check_it(x,arr[l]);
//if(check_it(x,arr[l]))
//k_equal_counter--;
l++;
}
cout<<ans_count<<endl;
return 0;
}

