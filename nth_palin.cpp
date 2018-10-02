#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
string s;
cin>>s;

string temp="";

temp+=s;

reverse(s.begin(),s.end());

temp+=s;

cout<<temp<<endl;

return 0;
}

