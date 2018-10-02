
#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int pairs(int k, vector<int> arr) {
    map<int,int> my_map;
    for(int i=0;i<arr.size();i++)
        my_map[arr[i]]++;
    
    int ans=0;
    map<int,int>::iterator it;
    for(it=my_map.begin();it!=my_map.end();++it)
    {
        //cout<<my_map[k+it->first]<<endl;
if(my_map.find(k+it->first)!=my_map.end())
        ans+=min(it->second,my_map[k+it->first]);
    }
    return (ans);
}

int main()
{
int n,k;
cin>>n>>k;
vector<int> arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
//cout<<"f"<<endl;
cout<<pairs(k,arr);
return 0;
}




