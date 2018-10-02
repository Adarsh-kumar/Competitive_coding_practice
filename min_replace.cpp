#include<bits/stdc++.h>
using namespace std;

bool is_opening(char c)
{
if(c=='('||c=='{'||c=='<'||c=='[')
return 1;
else
return 0;
}

char get_opposite(char c)
{
if(c==')')
return '(';
else if(c== '}')
return '{';
else if(c==']')
return '[';
else
return '<';
}

int solve(string s)
{
stack<char> st;

int count=0;
bool flag=1;
for(int i=0;i<s.size();i++)
{

if(is_opening(s[i]))
st.push(s[i]);

else
{

char temp=get_opposite(s[i]);

if(!st.empty())

{

char temp2=st.top();

if(temp2!=temp)
count++;

st.pop();
}

else
{
flag=0;
break;
}

}



}

if(flag==0)
return INT_MAX;

if(st.empty())
return count;

else
return INT_MAX;
}








int main()
{
string s;
cin>>s;
int ans=solve(s);
if(ans!=INT_MAX)
cout<<ans<<endl;
else
cout<<"Impossible"<<endl;
return 0;
}

