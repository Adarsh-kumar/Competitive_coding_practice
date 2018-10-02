#include<bits/stdc++.h>
using namespace std;





int solve(vector<int> &A) {
    vector<int> arr(A.size()+1);
    arr[0]=0;
    int n=0;
    for(int i=0;i<A.size();i++)
    n+=A[i];
    vector<bool> prime(n+1);
    for(int i=0;i<=n;i++)
    prime[i]=0;
    
   for(int i=2; i<=n+1; i++)
	{
   if(!prime[i])
  for(int j=2*i; j<=n+1; j+=i)
  prime[j]=1;
	}
    
    for(int i=0;i<A.size();i++)
    {
        if(i==0)
        arr[i+1]=A[i];
        else
        arr[i+1]=A[i]+arr[i];
    }
    
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A.size();j++)
        {
            if(prime[(arr[j+1]-arr[i])]==0)
            count++;
        }
    }
    
    return count;
    
    
    
}


int main()
{
int arr[]={10,2,7,11,5,7,17,8,9,11,14,2,7,1,8};

vector<int> a(arr,arr+15);

cout<<solve(a);

return 0;
}

