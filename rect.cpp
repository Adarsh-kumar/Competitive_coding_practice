#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
long long  x1,y1,x2,y2;
long long area;
}node;

bool comp(node a,node b)
{
return (a.area>b.area);
}

int main()
{
int n;
cin>>n;
bool flag=0;
node arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].x1>>arr[i].y1>>arr[i].x2>>arr[i].y2;
arr[i].area=abs(arr[i].x1-arr[i].x2)*abs(arr[i].y1-arr[i].y2);
}

sort(arr,arr+n,comp);

if(n<=5)
{
for(int i=0;i<n;i++)
{
int count=0;

for(int j=0;j<n;j++)
{
if(arr[i].x2==arr[j].x1&&arr[i].y2==arr[j].y1||(arr[i].x2==arr[j].x1)&&(arr[i].y2==arr[j].y1+(arr[j].y2-arr[j].y1))||(arr[i].x2==arr[j].x2)&&(arr[i].y2=arr[j].y2-(arr[j].y2-arr[j].y1)))
count++;
}

if(count>=n-1)
{
flag=1;
cout<<arr[i].x2<<" "<<arr[i].y2<<endl;
return 0;
}
}
}

if(!flag)
{
long long temp1=(arr[n-1].x1+arr[n-1].x2)/2;

long long temp2=(arr[n-1].y1+arr[n-1].y2)/2;

if(temp1>=(arr[0].x1)&&temp1<=(arr[0].x2)&&temp2>=arr[0].y1&&temp2<=arr[0].y2)
cout<<arr[n-1].x1<<" "<<arr[n-1].y1<<endl;

else
cout<<arr[n-2].x1<<" "<<arr[n-2].y1<<endl;

}

return 0;
}

