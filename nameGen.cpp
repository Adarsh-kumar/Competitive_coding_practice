#include<bits/stdc++.h>
using namespace std;


void name_gen(string arr[],int n)
{
string alpha="ABCDEFGHIJKL";
string small="abcdefghijkl";
int j=0;
bool flag=0;
for(int i=0;i<55;i++)
{
if(flag==0)
{
arr[i]=alpha[j];

flag=1;
j++;
}
else
{
arr[i]=arr[i-1]+small[j-1];
if(i%9==0)
flag=0;
}
}

}

int main()
{
int n,k;
cin>>n>>k;

string arr[55];
name_gen(arr,55);
int id=0;



for(int i=0;i<(n-k)+1;i++)
{
cin>>temp;
if(i==0)
{
if(temp=="YES")
{
for(int i=0;i<k;i++)
cout<<arr[id]<<" ";
id++;
}
else
{


return 0;
}

