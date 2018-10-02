#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005];

int main()
{
int t;
cin>>t;

while(t--)
{
string s;
int k;

cin>>s>>k;

unordered_map<char,int> my_map;

for(int i=0;i<s.size();i++)
{
my_map[s[i]]++;
}

long long count=0;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
for(char i='a';i<='z';i++)
{

if(my_map.find(i)!=my_map.end())
{
if(abs(it->second-my_map[i])>k)
{
count+=abs(it->second-my_map[i])-k;
if(it->second>my_map[i])
my_map[it->second]-=(abs(it->second-my_map[i])-k);
else
my_map[i]-=(abs(it->second-my_map[i])-k);
}

}
}
}

cout<<count<<endl;

}
/*

correct code of k good

// compute counts
counts['a'..'z'] // initialized to zero
for i=0..|w|-1:
    counts[w[i]]++

// compute answer
answer = N
for d='a'..'z':
    m = counts[d] // consider only the relevant m's
    current = 0
    for c='a'..'z':
        if counts[c] < m:
            current += counts[c]
        else if counts[c] > m + K:
            current += counts[c] - (m + K)

    if answer > current:
        answer = current

print answer
*/
return 0;
}


