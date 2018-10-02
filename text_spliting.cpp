#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,p,q;
cin>>n>>p>>q;
string s;
cin>>s;

if(p>n&&q>n)
cout<<-1<<endl;

else if(n%(p+q)!=0&&n%p!=0&&n%q!=0)
{
cout<<-1<<endl;
}

else if(n%p==0)
{
cout<<n/p<<endl;
int count=0;

int l=0;

while(count<n/p)
{
cout<<s.substr(l,p)<<endl;
l=l+p;
count++;
}

}


else if(n%q==0)
{
cout<<n/q<<endl;
int count=0;

int l=0;

while(count<n/q)
{
cout<<s.substr(l,q)<<endl;
l=l+q;
count++;
}

}

else 
{
cout<<(n/(p+q))*2<<endl;
int l=0;
int r=p;
int count=0;

while(count<n/(p+q))
{
cout<<s.substr(l,p)<<endl;
cout<<s.substr(r,q)<<endl;
l=r+q;
r=l+p;
count++;
}

}

return 0;
}



