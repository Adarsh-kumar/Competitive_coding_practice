class node
{
    public:
    int data;
    int index;
    public:
    node(int a,int b)
    {
        this->data=a;
        this->index=b;
    }
};

bool comparator(node a,node b)
{
    return(a.data<b.data);
}
int Solution::maxArea(vector<int> &arr) {
    vector<node> v;
    
    for(int i=0;i<arr.size();i++)
    v.push_back({arr[i],i});
    
    sort(v.begin(),v.end(),comparator);
    
    int minimum=v[0].data;
    int n=arr.size();
int sum=0;
int ans=0;
int current_area=0;
int l=0,r=0;
if(n<2)
return 0;
while(l<n)
{
//int current_area=min(minimum,arr[r])*(r-l+1);
while(r<n && min(minimum,v[r+1].data)*(v[r+1].index-v[l].index+1)>=sum)
{
r++;
minimum=min(minimum,v[r].data);
sum=minimum*(v[r].index-v[l].index+1);
}
ans=max(ans,sum);
if(sum>0)
sum-=v[l].index;
l++;
}

return ans;
}


