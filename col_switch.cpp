#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
int l,r;
}node;


int main()
{
int n;
cin>>n;
node arr[n];

long long  suml[n+1];
long long  sumr[n+1];

suml[0]=0;
sumr[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i].l>>arr[i].r;
suml[i+1]=suml[i]+arr[i].l;
sumr[i+1]=sumr[i]+arr[i].r;
}

long long ans=abs(suml[n]-sumr[n]);

int final_ans=-1;

for(int i=0;i<n;i++)
{
if(abs((suml[i]+arr[i].r+suml[n]-suml[i+1])-(sumr[i]+arr[i].l+sumr[n]-sumr[i+1]))>ans)
{
ans=abs((suml[i]+arr[i].r+suml[n]-suml[i+1])-(sumr[i]+arr[i].l+sumr[n]-sumr[i+1]));
final_ans=i;
}
}



cout<<final_ans+1<<endl;

return 0;
}

