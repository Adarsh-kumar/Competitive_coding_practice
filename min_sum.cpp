#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_sum(int arr[],int n)
{
sort(arr,arr+n);
vector<int> ans1;
vector<int> ans2;
vector<int>::iterator itr;
for(int i=0;i<n;i+=2)
{
ans1.push_back(arr[i]);
if(i+1<n)
ans2.push_back(arr[i+1]);
}
int ans=0;
int  size1=ans1.size();
int size2=ans2.size();
cout<<"its size one "<<size1<<" "; 
for(itr=ans1.begin();itr<ans1.end();itr++)
{
size1--;
cout<<*itr<<" ";
ans+=(*itr) *(pow(10,size1));
}

for(itr=ans2.begin();itr<ans2.end();itr++)
{
size2--;
cout<<*itr<<" ";
ans+=(*itr) *(pow(10,size2));;
}


return ans;



}



int main()
{
    int arr[] = {6, 8, 4, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<min_sum(arr, n)<<endl;
    return 0;
}
