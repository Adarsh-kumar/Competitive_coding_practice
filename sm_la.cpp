#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;

cin>>n>>m;

int sum=m;

string s="";

if(m<1||m>(n*9))
{
if(!(m==0&&n==1))
{
cout<<-1<<" "<<-1<<endl;
return 0;
}
}


for(int i=1;i<=n;i++)
{
if(sum>9)
{
s+="9";
sum-=9;
}

else if(sum>1&&(i!=n))
{
s+=to_string(sum-1);
sum=1;
}

else if(i==n)
s+=to_string(sum);

else
s+="0";

}

reverse(s.begin(),s.end());

cout<<s<<" ";

sum=m;

string s2="";

int i=1;

while(sum>=9)
{
s2+="9";
sum-=9;
i++;
}

if(sum>=0&&i<=n)
s2+=to_string(sum);
i++;

while(i<=n)
{
s2+="0";
i++;
}

cout<<s2<<endl;

return 0;
}



