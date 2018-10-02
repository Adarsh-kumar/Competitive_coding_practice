#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    long long s,e;
}node;

bool comp(node a ,node b)
{
    return a.e<b.e;
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
        long long s,e;
        
        for(int i=0;i<n;i++)
        cin>>arr[i].s>>arr[i].e;
        
        sort(arr,arr+n,comp);
        
        bool visited[n]={false};
        vector<int> alice;
        vector<int> bob;
        bool flag=1;
        
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                int count=1;
                visited[i]=1;
                if(i==n-1)
                {
                    if(flag)
                    alice.push_back(1);
                    else
                    bob.push_back(1);
                    
                    break;
                }
                
                node prev=arr[i];
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j].s>prev.e&&visited[j]==0)
                    {
                        visited[j]=1;
                        prev=arr[j];
                        count++;
                    }
                }
                if(flag)
                alice.push_back(count);
                else
                bob.push_back(count);
                
                flag=1-flag;
            }
        }
        
        long long ans1=0;
         long long ans2=0;
         
         
        for(int i=0;i<alice.size();i++)
        {
        //cout<<alice[i]<<" ";
        ans1^=alice[i];
        }
        
        for(int i=0;i<bob.size();i++)
        {
        //cout<<bob[i]<<" ";
        ans2^=bob[i];
        }
        
        if(ans1>ans2)
        cout<<"Alice"<<endl;
        else
        cout<<"Bob"<<endl;
        
    }
    
    return 0;
}
