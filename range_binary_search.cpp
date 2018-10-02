#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_indexer(vector<int> A,int b,int start,int last)
{
    int mid=(start+last)/2;
    if(start==last)
    {
        if(A[mid]==b)
        return mid;
        else
        return -1;
}
    if(A[mid]==b)
    return(mid);
    else if(A[mid]>b)
    return(find_indexer(A,b,start,mid));
    else
    return(find_indexer(A,b,mid+1,last));
    
}




int*  find_indexer_range(vector<int> A,int b,int start,int last,int* ans)
{
            int left_index,right_index;
            int current_index=find_indexer(A,b,start,last);
            if(current_index!=-1)
            {
                left_index=current_index;
                right_index=current_index;
                 int temp_current=current_index;
                while(left_index!=0 && left_index!=-1)
                {
                   
          int left_index=find_indexer(A,b,0,left_index-1);
           if(left_index!=-1)
           {
           ans[0]=left_index;
               temp_current=left_index;
           }
           else
           ans[0]=temp_current;
                }
                temp_current=current_index;
                while(right_index!=A.size()-1 && right_index!=-1)
                {
                    
            int right_index=find_indexer(A,b,right_index+1,A.size());
           if(right_index!=-1)
           {
           ans[1]=right_index;
               temp_current=right_index;
           }
           else
           ans[1]=temp_current;
                }  
        }
        else
        {
        ans[0]=-1;
        ans[1]=-1;
        }
    return(ans);
    
}
int main() {
    int ans[2];
    
    vector<int> A={1,1,1,1,1,1};
   int* result=find_indexer_range(A,2,0,A.size(),ans);
   //cout<<find_indexer(A,1,0,A.size());
    cout<<result[0]<<" ";
    cout<<result[1];
    return 0;
}
