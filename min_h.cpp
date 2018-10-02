#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,a;

cin>>n>>a;

long long temp=a/n;

if(temp*n!=a)
temp+=1;

cout<<temp<<endl;

return 0;
}

