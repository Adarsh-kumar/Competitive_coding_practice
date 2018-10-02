#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool is_safe(int i,int j,int m,int n)
{
if((i>=0 && i<m )&&( j>=0 && j<n))
return 1;
else
return 0;
}


float find_probabiltiy(int m,int n,int i,int j,int N)
{
float prob=0.0;
if(!is_safe(i,j,m,n))
return 0.0;
if(N==0)
return 1.0;
else
{
prob+=find_probabiltiy(m,n,i-1,j,N-1)*0.25;
prob+=find_probabiltiy(m,n,i,j-1,N-1)*0.25;
prob+=find_probabiltiy(m,n,i,j+1,N-1)*0.25;
prob+=find_probabiltiy(m,n,i+1,j,N-1)*0.25;

return prob;
}
}

int main()
{
    // matrix size
    int m = 5, n = 5;
 
    // coordinates of starting point
    int i = 1, j = 1;
 
    // Number of steps
    int N = 2;
 
    cout << "Probability is "
        << find_probabiltiy(m, n, i, j, N);
 
    return 0;
}
