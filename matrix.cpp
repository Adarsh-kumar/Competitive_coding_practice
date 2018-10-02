#include<iostream>
using namespace std;


void print_solution(int** solution ,int n )
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<solution[i][j]<<" ";
}
cout<<endl;
}
}

int main ()
{
int n;
cin>>n;
int* a[n];


//a=new int[n];
for (int i=0;i<n;i++)
{
a[i]=new int[n];
}

print_solution(a,n);
return 0;
}

