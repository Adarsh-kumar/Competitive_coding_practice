#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
vector<int> a;
a.push_back(0);
a.push_back(8);
a.push_back(0);
a.push_back(8);
a.push_back(0);
a.push_back(8);
   
for(itr=a.begin();itr!=a.end();++itr)
    {
        if(*itr==0)
        a.erase(itr);
        else
        break;
    }

for(int i=0;i<a.size();i++)
cout<<a[i]<<"  ";
return 0;
}

