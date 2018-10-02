#include <bits/stdc++.h>

using namespace std;

int get_closest(int arr[],int start,int end,int value)
{
int lo=start;
int hi=end;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid]==value)
{
return mid;
}

else if(arr[mid]>value)
{
hi=mid;
}

else
lo=mid+1;

}

if(arr[lo]>value)
return lo-1;
else
return lo;
}

int main()
{
int n;
cin>>n;
int arr[n];
int visited[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
visited[i]=0;
}

sort(arr,arr+n);

int start=0;

int end=n;

int count=0;


while(end-start>1)
{
visited[end-1]=1;

int temp= get_closest(arr,start,end,arr[end-1]/2);
cout<<temp<<endl;

visited[temp]=1;


while(visited[end]!=0)
{
end--;
}

if(temp!=-1)
count++;

end=temp+1;

}

cout<<count<<endl;

return 0;
}





