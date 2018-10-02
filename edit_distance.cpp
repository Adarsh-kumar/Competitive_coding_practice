#include<iostream>
#include<string>
using namespace std;


int min(int x, int y, int z)
{
   return min(min(x, y), z);
}

int edit_distance(string s1,string s2,int l1,int l2)
{
int i,j,ans;
if(l1==0)
{
if(s1[l1]==s2[l2])
return l2;
else
return l2+1;
}
if(l2==0) 
{
if(s1[l1]==s2[l2])
return l1;
else
return l1+1;
}
else if(s1[l1]==s2[l2])
return edit_distance(s1,s2,l1-1,l2-1);
else
return 1+min(edit_distance(s1,s2,l1-1,l2-1),edit_distance(s1,s2,l1-1,l2),edit_distance(s1,s2,l1,l2-1));
}


int main()
{
string s1="geekkfjfsglflgdfsknfknfbnk";
string s2="goweek";
int l1=s1.size();
int l2=s2.size();
cout<<edit_distance(s1,s2,l1-1,l2-1);
return 0;
}
