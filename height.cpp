#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_height(int arr[],int n)
{
sort(arr,arr+n);
int i=1;
int height=1;
int counter=1;
int temp;
int current=arr[0];
while(i+counter<n)
{
counter++;
temp=0;
while(temp!=counter)
{
if(arr[i]>current)
{
temp++;
}
i++;
}
current=arr[i-counter];
height++;
}

return height;
}

int main()
{
    int boxes[] = {10, 10,10,10,10,10};
    int n = sizeof(boxes)/sizeof(boxes[0]);
    cout << max_height(boxes, n) << endl;
    return 0;
}
