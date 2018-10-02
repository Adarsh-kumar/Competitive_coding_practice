#include<bits/stdc++.h>
using namespace std;

int main()
{
long long a,b;

cin>>a>>b;

long long  count=0;


count+=a/b;

long long temp=a%b;

if(temp>0)
count+=(temp*(b-temp)+1);

cout<<count<<endl;

return 0;
}


