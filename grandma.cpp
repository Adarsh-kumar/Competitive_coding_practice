#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,p;

cin>>n>>p;

string arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

long long  count=1;
long long  current_count=1;

for(int i=n-2;i>=0;i--)
{
if(arr[i]=="half")
current_count=current_count*2;

else
current_count=current_count*2+1;

count+=current_count;

}

p=p/2;

long long ans=(p*count);

cout<<ans<<endl;

return 0;
}
