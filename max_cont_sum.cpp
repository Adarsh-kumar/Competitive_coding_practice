#include<bits/stdc++.h>
using namespace std;

int max_cont_sum(int arr[],int n)
{
int max_ending_here=0;
int max_so_far=0;
int start_index=0;
int end_index=0;
for(int i=0;i<n;i++)
{
max_ending_here+=arr[i];
if(max_ending_here<=0)
{
start_index=i+1;
max_ending_here=0;
}
else
{
if(max_ending_here>max_so_far)
end_index=i;
max_so_far=max(max_ending_here,max_so_far);
}
}
cout<<start_index<<endl;
cout<<end_index<<endl;
return max_so_far;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = max_cont_sum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
