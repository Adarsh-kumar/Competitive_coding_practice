#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

string s;
cin>>s;

string prev=s;

int count=1;

n--;

while(n--)
{
cin>>s;

if(s!=prev)
{
prev=s;
count++;
}

}

cout<<count<<endl;

return 0;
}

