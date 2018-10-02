#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T> void reverse_it(T* start,T* end)
{
if(start!=end)
{
end--;
while(true)
{
swap(*start, *end); 
                start++; 
                if(start == end) { 
                     break; 
                } 
                end--; 
                if(start == end) { 
                     break; 
                } 
}
}
}

int main()
{
string s="adarsh";
reverse_it(s.begin(),s.end());
cout<<s<<endl;
return 0;
}

