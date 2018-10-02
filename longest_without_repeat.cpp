#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int l=0;
    int r=0;
    map<char,int> my_map;
    int n=s.size();
    int ans=INT_MIN;
    
    while(l<n)
    {
        while(r<n&&(my_map.find(s[r])==my_map.end()))
        {
            my_map[s[r]]++;
            r++;
        }
        ans=max(r-l,ans);
        auto it=my_map.find(s[l]);
        if(it->second==2)
        my_map[it->first]--;
        else
        my_map.erase(s[l]);
        l++;
    }
    
    cout<<ans<<endl;
}
return 0;
}
