//maximum number of bridges 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


typedef struct city
{
int north;
int south;
}city;

bool compare(city a,city b)
{
    if (a.south == b.south)
        return a.north < b.north;
    return a.south < b.south;
}

int max_no_of_bridges(city cities[],int n)
{
//sort the city pairs and find the lis on the north coordinates
sort(cities,cities+n,compare);

//find the lis

int lis[n];

for(int i=0;i<n;i++)
{
if(i==0)
lis[i]=1;
else
{
if(cities[i].north>cities[i-1].north)
lis[i]=lis[i-1]+1;
else
lis[i]=lis[i-1];
}
}

return lis[n-1];
}

int main()
{
    city values[] = {{6, 2}, {4, 3}, {2, 6}, {1, 5}};
    int n = 4;
    cout << "Maximum number of bridges = "
             << max_no_of_bridges(values, n);    
    return 0;
} 

//time compplexity 

//qsort+O(n) for my technique on lis
