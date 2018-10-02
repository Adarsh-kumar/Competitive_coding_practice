#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;

int double_zero_count=0;
int o_c_a=0;
int b_z_a_o=0;
int zero_a=0;

for(int i=0;i<s1.size();i++)
{
if(s1[i]=='0'&& s2[i]=='0')
double_zero_count++;

if(s1[i]=='1')
o_c_a++;

if(s2[i]=='0' && s1[i]=='1')
b_z_a_o++;

if(s1[i]=='0'&&s2[i]!='0')
zero_a++;

}

long long ans=0;
ans=(double_zero_count*o_c_a)+(b_z_a_o*zero_a);

cout<<ans<<endl;

return 0;
}
