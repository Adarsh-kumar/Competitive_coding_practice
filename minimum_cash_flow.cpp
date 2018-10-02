#include<iostream>
using namespace std;
#define N 3

void minimum_flow(int graph[][N])
{
//find the maximum creditor and maximum dept
int credit[N],dept[N];
for(int i=0;i<N;i++)
{
credit[i]=dept[i]=0;
for(int j=0;j<N;j++)
{
credit[i]+=graph[j][i];
dept[i]+=graph[i][j];
}

}

sort(credit,credit+N);
sort(dept,dept+N);

set<int> persons;

exchange_money(credit,debt,n);
}

void exchange_money(int* credit,int* debit,int n)
{
if(n>0)
{
if(debit[n-1]>credit[n-1])
cout<<













int main()
{
    // graph[i][j] indicates the amount that person i needs to
    // pay person j
    int graph[N][N] = { {0, 1000, 2000},
                        {0, 0, 5000},
                        {0, 0, 0},};
 
    // Print the solution
    minCashFlow(graph);
    return 0;
}
