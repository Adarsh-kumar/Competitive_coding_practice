#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n,k;

int x;
cin>>n>>k>>x;
unordered_map<int,int > my_map;

int arr[k];

int minimum=1000000001;
int maximum=-300;

long long ans=0;


for(int i=0;i<k;i++)
{
cin>>arr[i];
ans+=arr[i];
minimum=min(minimum,arr[i]);
maximum=max(maximum,arr[i]);
my_map[arr[i]]++;
}

int rest=n-k;
int current=minimum+x;

if(current>maximum)
{
int temp=(current-maximum);

if(temp>=rest)
{
int temp2=(current-rest)+1;

ans+=((temp2)*(rest)+(rest*(rest-1))/2);
rest=0;
}

else 
{

int temp2=(current-temp)+1;

ans+=((temp2)*(temp)+(temp*(temp-1))/2);

current=maximum;
rest-=temp;
}
}


while(rest>0)
{
if(my_map[current]==0)
{
my_map[current]++;
ans+=current;
current--;
rest--;
}
else
current--;
}

cout<<ans<<endl;
}

return 0;
}








