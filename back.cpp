#include<iostream>
#include<string>
using namespace std;

void swaper (char* a,char* b)
{
char temp;
temp=*a;
*a=*b;
*b=temp;
}

void permute(char* c,int l,int r)
{
if(l==r)
cout<<c<<endl;
else
{
for(int i=l;i<r;i++)
{
swaper(c+l,c+i);
permute(c,l+1,r);
swaper(c+l,c+i);
}
}
}

int main()
{
char str[] = "ABC";
//cin>>input;
permute(str,0,3);
return 0;
}
