#include<bits/stdc++.h>
using namespace std;
vector<int> f_ans;


long long arr[64];

void convert_it(int n)

{
int i=0;
while(arr[i]<n)
i++;

if(arr[i]==n)
f_ans.push_back(n);

else if(arr[i]>n)
{
int factor=n/arr[i-1];
int rest=n%arr[i-1];


while(factor--)
f_ans.push_back(arr[i-1]);


if(rest>=10)
convert_it(rest);

else if(rest<10)
{
while(rest--)
f_ans.push_back(1);
}

}

}

int main()
{


queue<string> q;

q.push("1");
int count=0;

while(count<64)
{


string temp=q.front();

arr[count]=stoi(temp);

q.pop();

string  temp1=temp+"0";

string temp2=temp+"1";

q.push(temp1);
q.push(temp2);

count++;

}
int n;
cin>>n;
convert_it(n);

cout<<f_ans.size()<<endl;

for(int i=0;i<f_ans.size();i++)
{
cout<<f_ans[i]<<" ";
}




return 0;}



