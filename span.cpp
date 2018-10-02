#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	int n;
	cin>>n;
	bool arr[n];
        bool arr2[n];

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
cin>>arr2[i];


int ans=INT_MIN;
int l=0;
int r=0;

while(l<n)
{
while(r<n)
{
if(arr[r]==arr2[r])
r++;
else
break;
}
ans=max(r-l,ans);
l=r;
}

cout<<ans<<endl;

}

return 0;
}

