#include<iostream>
using namespace std;

int main()
{
int max=8889;
int arr[]={23,223,568,567,156};
int min1,min2;
min1=min2=max;
for(int i=0;i<5;i++)
{
if(arr[i]<min1)
min1=arr[i];
else if(arr[i]<min2)
min2=arr[i];
}
cout<<min1<<"  ";
cout<<min2<<"  ";
return 0;
}
