int tree[2*100000+2];

void build(int node,int start,int end,vector<int> A)
{
    if(start==end)
    tree[node]=A[start];
    else
    {
    int mid=start+(end-start)/2;
    build(2*node,start,mid,A);
    build(2*node+1,mid+1,end,A);
    
    tree[node]=max(tree[2*node],tree[2*node+1]);
    }
    
}

int query(int node,int start,int end,int l,int r)
{
    if(r<start || end<l)
    return 0;
    else if(l<=start&&r>=end)
    return tree[node];
    else
    {
        int mid=start+(end-start)/2;
    return max(query(2*node,start,mid,l,r),query(2*node+1,mid+1,end,l,r));
}
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    build(1,0,A.size(),A);
    
    int n=((A.size())*(A.size()+1))/2;
    int arr[n];

int k=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A.size();j++)
        {
            arr[k]=query(1,0,A.size(),i,j);
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int result=1;
        for(int j=2;j<=sqrt(arr[i]);j++)
        {
            if(arr[i]%j==0)
            {
                if((arr[i]/j)==j)
                result*=((j)%1000000007);
                else
                result*=(((arr[i]/j) * j)%1000000007);
            }
        }
        arr[i]=result%1000000007;
    }
    
    
    sort(arr,arr+n,std::greater<int>());
    
    
    for(int i=0;i<B.size();i++)
    B[i]=arr[B[i]];
    
    return B;
    
}

