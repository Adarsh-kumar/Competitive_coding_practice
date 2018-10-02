#include<bits/stdc++.h>
#include <queue>
using namespace std;

typedef struct element
{
char c;
int frequency;
}element;

struct less_element
{
bool operator()(const element& lhs, const element& rhs) const
  {
    return lhs.frequency< rhs.frequency;
  }
};

string re_arrange(string s,int d)
{
std::priority_queue<element, std::vector<element>,less_element> pq;

int size=s.size();

bool visited[size];
int freq;

//filling the priority queue

for(int i=0;i<size;i++)
{
if(!visited[i])
{
freq=0;
for(int j=i;j<size;j++)
{
if(s[i]==s[j])
{
visited[j]=1;
freq++;
}
}
pq.push({s[i],freq});
}
s[i]='\0';
}

cout<<"   "<<(pq.top()).c<<"  "<<(pq.top()).frequency;
while(!pq.empty())
{
element e=pq.top();
pq.pop();
int f=e.frequency;
for(int i=0;i<size;i++)
{
if(s[i]=='\0')
{
while(f)
{
if(i+d*(f-1)<size)
{
s[i+d*(f-1)]=e.c;
f--;
}
else
return("can't be rearranged");
}
}
}
}

return s;
}

int main()
{
    string str = "aaaa";
    string s= re_arrange(str, 3);
    cout << s;
return 0;
}


