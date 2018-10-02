#include<iostream>
using namespace std;

int interpolation_search(int* a,int start,int end,int key)
{
int pos=start+((key-a[start])*(end-start))/(a[end]-a[start]);
if(start==end)
{
if(a[start]==a[end])
return start;
else
return -1;
}
else if (a[pos]==key)
return pos;
else if(a[pos]>key)
return(interpolation_search(a,start,pos,key));
else
return(interpolation_search(a,pos+1,end,key));
}

int main()
{
int a[]={1,2,3,4,5};
cout<<"here it is"<<interpolation_search(a,0,5,1);
return 0;
}
