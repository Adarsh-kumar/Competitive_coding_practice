#include<bits/stdc++.h>
using namespace std;

int gobinary(int v[],int n)
{
    int lo=9;
    int hi=1110;
    int workers=1;
    while(lo<hi)
    {
        workers=1;
        int mid=lo+(hi-lo)/2;
        int current=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]+current<=mid)
            {
                current+=v[i];
            }
            else
            {   
            current=v[i];
            workers+=1;
            }

        }
        
        if(workers>3)
            lo=mid+1;
        else
            hi=mid;
    }
    return (lo);
}
int main()
{
     int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   // vector<int> arr2(arr);
   int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout <<gobinary(arr,n)<< endl;
    return 0;
}
