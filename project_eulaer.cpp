#include<iostream>
using namespace std;

int no_of_ways(int x)
{
if(x==0)
return 3;
else if (x==1)
return 3;
else if (x==2)
return 3;
else if(x==3)
return 6;
else
return(no_of_ways(x-2)+no_of_ways(x-3)+no_of_ways(x-4));
}
int main ()
{
cout<<no_of_ways(50);
return 0;
}
