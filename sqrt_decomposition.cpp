#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAXN 10000
#define SQRSIZE  100
 
int arr[MAXN];               // original array
int block[SQRSIZE];          // decomposed array
int block_size;                      // block size

void query(int l,int r)
{
//calculate the block


//task as we need 
void task(int arr[],int i)
{
pre[i]=0;
for(int j=block_size*i,j<block_size*(i+1);j++)
{
pre[i]+=arr[j];
}
}

//preprocessing 
void preprocess(int arr[],int n)
{
int block_size=sqrt(n);
//vector<int> pre(block_size);
for(int i=0;i<block_size;i++)
{
task(arr,i);
}
}
// Driver code
int main()
{
    // We have used separate array for input because
    // the purpose of this code is to explain SQRT
    // decomposition in competitive programming where
    // we have multiple inputs.
    int input[] = {1, 5, 2, 4, 6, 1, 3, 5, 7, 10};
    int n = sizeof(input)/sizeof(input[0]);
 
    preprocess(input, n);
 
    cout << "query(3,8) : " << query(3, 8) << endl;
    cout << "query(1,6) : " << query(1, 6) << endl;
    update(8, 0);
    cout << "query(8,8) : " << query(8, 8) << endl;
    return 0;
}

