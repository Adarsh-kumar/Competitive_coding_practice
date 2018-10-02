#include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int a,b,c,n;
cin>>a>>b>>c>>n;
if(c>a||c>b)
cout<<-1<<endl;
else if(c+(a-c)+(b-c)>=n)
cout<<-1<<endl;
else
cout<<n-(c+(a-c)+(b-c));

return 0;
}

