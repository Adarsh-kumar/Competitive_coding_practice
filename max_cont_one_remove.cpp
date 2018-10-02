#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005];

int current_index=0;
long long current=0;
int end_index=0;
long long final_max=-10000000000;

void kandanes(void )
{
current_index=0;
current=0;
end_index=0;
final_max=-10000000000;

for(int i=0;i<n;i++)
{
current+=a[i];

if(current<=0)
{
current=0;
current_index=i+1;
}

else
{
if(current>final_max)
end_index=i;
final_max=max(current,final_max);
}

}

}


int main()
{
int t;
cin>>t;

while(t--)
{
cin>>n;

for(int i=0;i<n;i++)
cin>>a[i];

long long max_comp=10000000000;

int min_index=0;

kandanes();



if(final_max<0)
{
for(int i=0;i<n;i++)
final_max=max(final_max,a[i]);
cout<<final_max;
}

else
{

for(int i=0;i<n;i++)
{
if(a[i]<max_comp)
{
max_comp=min(max_comp,a[i]);
min_index=i;
}

}



if(a[min_index]>=0)
{
final_max-=a[min_index];
cout<<final_max;
}

else
{
bool flag=0;
for(int i=current_index;i<end_index;i++)
{
if(a[i]==a[min_index])
{
flag=1;
a[i]=0;
}
}

if(!flag)
a[min_index]=0;

kandanes();
cout<<final_max;
}



}

}

return 0;

}



