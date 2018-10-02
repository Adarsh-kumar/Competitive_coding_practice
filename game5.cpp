#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

long long  arr[n];
long long  arr2[n];

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
cin>>arr2[i];

sort(arr,arr+n);
sort(arr2,arr2+n);

int r1=n-1;
int r2=n-1;

long long score1=0;
long long score2=0;

bool flag=0;

while(r1>0||r2>0)
{

if(flag==0&&r1<0)
r2--;

else if(flag==0 && r2>=0)
{

if(arr[r1]>arr2[r2])
{
score1+=arr[r1];
r1--;
flag=1;
}

else
{
r2--;
flag=1;
}

}

else if(flag==0 )
{
score1+=arr[r1];
r1--;
}

else if(flag==1&& r2<0)
r1--;


else if(flag==1 && r1>=0)
{

if(arr2[r2]>arr[r1])
{
score2+=arr2[r2];
r2--;
flag=0;
}

else
{
r1--;
flag=0;
}

}

else if(flag==1)
{

score2+=arr2[r2];
r2--;

}


}
cout<<score1-score2<<endl;
return 0;
}
