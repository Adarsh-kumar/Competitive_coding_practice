#include<iostream>
using namespace std;

// even i use array index much larger than the initialisation ,segmentation fault is not occuring 
int main ()
{
int n;
cin>>n;
int* a;
a=new int[n];
for(int i=0;i<n;i++)
{
a[i]=i;
cout<<i<<" ";
}
delete(a);
cout<<a[100];
return 0;
}

