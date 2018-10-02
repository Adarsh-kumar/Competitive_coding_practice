#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
long long  n,m;
int a,b;
cin>>n>>m>>a>>b;

cout<<min((n%m)*b,(((n/m)+1)*m-n)*a)<<endl;
return 0;
}

