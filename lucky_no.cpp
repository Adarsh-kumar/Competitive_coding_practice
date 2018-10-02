#include<bits/stdc++.h>


using namespace std;

long long get_s(int n)
{

long long ans=0;
for(int i=0;i<n;i++)
{
ans+=7*pow(10,i);
}

return ans;

}

long long get_number(int n)
{
long long ans=0;
int i=0;
int p=1;
while((n-4*p)>0&&(n-(4*p))%7!=0)
p++;

if((n-4*p)<0)
return -1;

else
{
n-=4*p;

int s_p=n/7;
for(i=0;i<s_p;i++)
{
ans+=7*pow(10,i);
}

while(p--)
{
ans+=4*pow(10,i);
i++;
}

return ans;
}





return ans;
}







int main()
{

int n;

cin>>n;

long long ans=0;
if(n%7==0)
{

ans=get_s(n/7);
}


else 
{
ans=get_number(n);
}

cout<<ans<<endl;

return 0;
}

