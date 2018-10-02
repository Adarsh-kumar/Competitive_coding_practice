#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long S,X,N;
    cin>>S>>X>>N;
    
    int days=S/X;
    
    if(days*(X)!=S)
    days++;
    int prev=1;
    long long count=0;
    int dc=0;
    
    for(int i=0;i<N;i++)
{
    
    long long u,v;
    cin>>u>>v;
    
    if(count+(u-prev)*X<=S)
    {
    dc+=(v-prev);
    count+=(u-prev)*X;
    if(count<S)
    {
    count+=v;
    dc+=1;
    prev=u;
    }
    else
    break;
    }
      else
    {
      long long left=S-count;
      int days=left/X;
      if(days*X!=left)
      days+=1;
      
      dc+=days;
      break;
    }
}

    
    cout<<dc<<endl;
    
    return 0;
}
