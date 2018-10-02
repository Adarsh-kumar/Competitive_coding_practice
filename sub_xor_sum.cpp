#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
long long arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

n--;

long long final_ans=0;

while(n--)
{
long long current_ans=0;

for(int i=0;i<32;i++)
{
if(n& 1<<i)
{
current_ans|=arr[i];
c_size++;
