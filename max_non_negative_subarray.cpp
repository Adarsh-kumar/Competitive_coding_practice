vector<int> Solution::maxset(vector<int> &A) {
    int final_max=0;
    int current_max=0;
    int start_index=0;
    int end_index=0;
    int max_start_index=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
        {
        current_max=0;
        start_index=i+1;
        }
        else
        {
        if(final_max<=current_max+A[i])
        {
            if(final_max==current_max+A[i])
            {
            if((i-start_index)>(end_index-max_start_index))
            {
        end_index=i;
        max_start_index=start_index;
            }
            }
            else
            {
                end_index=i;
        max_start_index=start_index;
            }
            
        }
        final_max=max(final_max,current_max+A[i]);
        current_max=current_max+A[i];
    }
}
vector<int> ans;

if(A[max_start_index]<0)
return ans;
else
{
for(int i=max_start_index;i<=end_index;i++)
{

ans.push_back(A[i]);
}
}



return ans;
}

