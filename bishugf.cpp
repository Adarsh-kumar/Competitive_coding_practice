/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> arr[1001];
int level[1001];
//int weight[1001];

int main()
{
int n;
int u,v;
cin>>n;

for(int i=0;i<n-1;i++)
{
cin>>u>>v;
arr[u].push_back(v);
arr[v].push_back(u);
}
queue<int> q;

q.push(1);
level[1]=0;

while(!q.empty())
{
int temp=q.front();
for(int i=0;i<arr[temp].size();i++)
{
level[arr[temp][i]]=level[temp]+1;
q.push(arr[temp][i]);
}
q.pop();
}

int ans=INT_MAX;
int index=0;
int q1;
for(int i=2;i<=n;i++)
{
cin>>q1;
if(level[q1]<ans)
{
ans=level[q1];
index=q1;
}
else if(level[q1]==ans)
{
index=min(index,q1);
}
}

//cout<<arr[1].size()<<endl;
cout<<index<<endl;

return 0;

}



