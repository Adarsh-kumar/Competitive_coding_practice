#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int k1;
int k2;

queue<int> s1;
queue<int> s2;

int temp;
cin>>k1;
while(k1--)
{
cin>>temp;
s1.push(temp);
}
cin>>k2;
while(k2--)
{
cin>>temp;
s2.push(temp);
}

int count=0;

while(!s1.empty()&&!s2.empty())
{
int temp1=s1.front();
int temp2=s2.front();

s1.pop();
s2.pop();

if(count>1000000)
break;

else if(temp1>temp2)
{
s1.push(temp2);
s1.push(temp1);
count++;
}


else
{
s2.push(temp1);
s2.push(temp2);
count++;
}



}

if(count>1000000)
cout<<-1<<endl;

else
{
if(s1.empty())
cout<<count<<" "<<2<<endl;
else
cout<<count<<" "<<1<<endl;

}

return 0;
}
