#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
string s;
cin>>s;
int count=0;

for(int i=0;i<s.size();)
{
count=0;
while(i<s.size()&&s[i]=='1')
{
count++;
i++;
}
cout<<count;
i++;


}

return 0;
}
