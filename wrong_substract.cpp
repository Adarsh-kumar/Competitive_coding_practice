#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> digits(int number)
{
int dg_count=0;
while(int(number/pow(10,dg_count))!=0)
{
dg_count++;
}
vector<int> ans;
while(dg_count>=0)
{
ans.push_back(number/pow(10,dg_count));
number%=int(pow(10,dg_count));
dg_count--;
}
return ans;
}



int main()
{
long long n;
int k;
cin>>n>>k;
vector<int> digit=digits(n);
int current_last=digit.size()-1;
while(k--)
{
if(digit[current_last]==0)
{
current_last--;
}
else
digit[current_last]--;
}
int temp=current_last;
int answer=0;
for(int i=0;i<=current_last;i++)
{
answer+=digit[i]*pow(10,temp);
temp--;
}
cout<<answer<<endl;
return 0;
}



