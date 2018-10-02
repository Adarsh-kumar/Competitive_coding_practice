
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string countAndSay(int A) {
    string ans;
    string ans2;
    ans="11";
    if(A==1)
    return("1");
    else if(A==2)
    return("11");
    A-=2;
    int i=0;
    int j=0;
    while(A--)
    {
        ans2=ans;
        //cout<<ans2<<endl;
        ans.clear();
i=0;
    while(i<ans2.size())
    {
        
        int j=i;
        
        while(j<ans2.size()&&ans2[i]==ans2[j])
        {
            j++;
        }
        //cout<<std::to_string(j-i)<<endl;
        ans.append(std::to_string(j-i));
//what is being aappended here
        string s=std::to_string(ans2[i]-48);
        ans.append(s);
        //cout<<(ans2[i])<<endl;
        i=j;
        
    }
}
return ans;
}

int main()
{
int n=4;
cout<<countAndSay(5)<<endl;
return 0;
}

