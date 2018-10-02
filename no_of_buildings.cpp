#include<iostream>
using namespace std;

int count_ways(int n)
{
int countb=1,counts=1;
int prevs,prevb;
for(int i=2;i<=n;i++)
{
prevb=countb;
prevs=counts;
countb=prevs;
counts=prevs+prevb;

}

return ((countb+counts)*(countb+counts));
}

int main()
{
    int N = 3;
    cout << "Count of ways for " << N
         << " sections is " << count_ways(4);
    return 0;
}



