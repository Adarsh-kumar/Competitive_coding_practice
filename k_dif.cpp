#include<bits/stdc++.h>
using namespace std;

double diff(vector<vector<long long > > a,long long val,int index)
{
    double dif=0;
    
    for(int i=0;i<a.size();i++)
    {
        dif+=abs(a[i][index]-val);
    }
    
    return dif;
}



int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<vector<long long > > arr;
    
    for(int i=0;i<n;i++)
    {
        vector<long long > temp;
        for(int j=0;j<k;j++)
        {
            long long u;
            cin>>u;
            temp.push_back(u);
        }
        arr.push_back(temp);
    }
    

    vector<double> ans;
    
    for(int i=0;i<k;i++)
    {
    double lo=-1000000000000000000;
    double hi=1000000000000000000;
        
        for(int j=0;j<500;j++)
        {
        double lo1=lo+double(hi-lo)/3;
        
        double lo2=lo+2*double(hi-lo)/3;
        
        if(diff(arr,lo1,i)<diff(arr,lo2,i))
        hi=lo2;
        else
        lo=lo1;
       
       //cout<<hi<<endl;
    }
    
    ans.push_back(lo);
    }


for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

cout<<"printed"<<endl;
    
    
}
