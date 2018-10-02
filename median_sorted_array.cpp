#include <bits/stdc++.h>

using namespace std;
int merged_median_finder_helper1(int* ,int* ,int ,int ,int );
int median_finder(int* a,int start,int end)
{
if((end-start)%2!=0)
return(a[(start+end)/2]);
else
return(a[(start+end)/2]+a[(start+end)/2+1]);
}

int merged_median_finder_helper2(int *a ,int* b ,int start,int mid,int end)
{
int mid1=median_finder(a,mid,end);
int mid2=median_finder(b,start,mid);
if(end-start<=1)
{
return(a[end]+b[start]/2);
}
else
{
if(mid1>mid2)
return(merged_median_finder_helper1(a,b,start,mid,end));
else
return(merged_median_finder_helper2(a,b,start,mid,end));
}
}
       
int merged_median_finder_helper1(int *a ,int* b ,int start,int mid,int end)
{
int mid1=median_finder(a,start,mid);
int mid2=median_finder(b,mid,end);
if(end-start<=1)
{
return(a[end]+b[start]/2);
}
else
{
if(mid1>mid2)
return(merged_median_finder_helper1(a,b,start,mid,end));
else
return(merged_median_finder_helper2(a,b,start,mid,end));
}
}

int merged_median_finder(int* a,int* b,int start,int end)
{
int mid=(start+end)/2;
int mid1=median_finder(a,start,end);
int mid2=median_finder(b,start,end);
if(end-start<=1)
{
return(a[end]+b[start]/2);
}
else
{
if(mid1>mid2)
return(merged_median_finder_helper1(a,b,start,mid,end));
else
return(merged_median_finder_helper2(a,b,start,mid,end));
}
}
       
int main()
{
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int ans=merged_median_finder(ar1,ar2,0,n1);
    cout<<ans;
}
