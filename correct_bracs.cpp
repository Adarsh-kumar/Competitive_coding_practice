#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<string> v[3*100000+1];

bool is_reverse(char c)
{
return (c==')');
}

int check_correct(string s)
{
stack<int> st;
for(int i=0;i<s.size();i++)
{
if(!is_reverse(s[i]))
st.push(s[i]);
else
{
if(!st.empty()&&st.top()=='(')
st.pop();
else
st.push(s[i]);
}
}
return (st.size());
}

int helper(vector<string> v)
{
int ans=0;
for(int i=0;i<v.size();i++)
{
for(int j=i;j<v.size();j++)
{
if(check_correct(v[i]+v[j])==0)
ans+=1;
if(check_correct(v[j]+v[i])==0)
ans+=1;
}
}
return ans;
}



int main()
{
int n;
cin>>n;

vector<string> incorrect;

string arr[n];
int correct_count=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
int temp=check_correct(arr[i]);
if(temp!=0)
v[temp].push_back(arr[i]);
else
correct_count++;
}


long long ans=0;

ans+=pow(correct_count,2);


//cout<<check_correct(incorrect[0]+incorrect[1])||check_correct(incorrect[0]+incorrect[1]);
for(int i=0;i<=3*100000;i++)
{
if(!v[i].empty())
ans+=helper(v[i]);
//cout<<v[i].size()<<endl;
}

cout<<ans<<endl;

//cout<<check_correct(incorrect[0].append(incorrect[1]));


return 0;
}

