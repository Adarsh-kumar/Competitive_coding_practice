#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


/*typedef struct element
{
int value;
int index;
}element;

bool comparator(element a,element b)
{
return(a.value<b.value);
}*/

int main()
{
int n,k;
cin>>n>>k;
int arr[k];
int ans=INT_MAX;
int index=-2;
if(n==0)
{
cout<<k<<" "<<0<<endl;
return 0;
}

for(int i=0;i<k;i++)
{
cin>>arr[i];
if((n%arr[i]<ans)&&(arr[i]<=n))
{
ans=n%arr[i];
index=i+1;
}
}
if(index==-2)
cout<<k<<" "<<0<<endl;
else
cout<<index<<" "<<(n/arr[index-1])<<endl;
return 0;
}

