#include<iostream>
#include<vector>
#include<string>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

#define MAX_COUNT 10000

vector<int> vec(MAX_COUNT);

void generate_numbers()
{
queue<int> q;

q.push(1);

for(int i=0;i<MAX_COUNT;i++)
{
int s1=q.front();
//cout<<s1<<" ";
q.pop();

vec.push_back(s1);

int  s2=s1;
q.push(s1*10);
q.push(s2*10+1);
}
}

int get_the_number(int number)
{
for(int i=0;i<vec.size();i++)
{
  
if((vec[i])%number==0)
return((vec[i]));
}
    return 0;
}

int main()
{
int n;
while(scanf("%d",&n))
{
    //generate_numbers();
    //cout<<vec.size()<<" ";  
cout<<get_the_number(n)<<endl;
}
return 0;
}


