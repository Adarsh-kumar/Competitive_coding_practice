#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    long long s,e;
}node;
bool comp2(node a ,node b)
{
    return (a.s>b.s);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        
        cin>>n;
        node arr[n];
        for(int i=0;i<n;i++)
        {
        cin>>arr[i].s>>arr[i].e;
        }
        sort(arr,arr+n,comp2);
        int ans=INT_MIN;
        
       int l=0;
       int r=0;
       
       while(l<n)
       {
           while(r<n&&arr[r].s>arr[l].e)
           {
               r++;
           }
           ans=max(ans,r-l);
           l++;
       }
        cout<<ans<<endl;
    }
    return 0;
}
