#include <bits/stdc++.h>

using namespace std;
int indicator=0;
int find_index(int* a,int start ,int n ,int m)
{
    //int start=0;
    if(start!=n)
    {
        int mid=(start+n)/2;
        if(a[mid]==m)
            return mid;
        else if (a[mid]>m)
            
            return find_index(a,start ,mid ,m);
        else
            return find_index( a,mid+1 ,n ,m);
        
    }
    else
    {
        if(a[start]==m)
        return(start);
        else
            return -1;
    }
    
    
}
int main()
{
    int N;
    int arr[N];
    cin>>N;
    for (int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            indicator=1;
    }
    
    int left[1000000],right[1000000],lcount[1000000],rcount[1000000];
    int sizel=0;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<N;k++)
            {
                left[sizel]=(arr[i]*arr[j])+arr[k];
                sizel++;
            }
        }
    }
    
    int sizer=0;
     for(int i=0;i<N;i++)
    {
         if(arr[i]==0)
         {
             cout<<"continued ";
             continue;
         }
        for(int j=0;j<N;j++)
        {
            for(int k=0;k<N;k++)
            {
                right[sizer]=arr[i]*(arr[j]+arr[k]);
                sizer++;
            }
        }
     }
    
         sort(left,left+sizel);
         sort(right,right+sizer);
    //filling the counter array
     int j;
    for (int i=0;i<sizel;)
    {
        lcount[i]=1;
        for(j=i+1;j<sizel;j++)
        {
            lcount[j]=1;
            if(left[i]!=left[j])
           {
                 i=j;
             break;
            }
            else
            {
                for (int l=i;l<j;l++)
                {
                  lcount[l]++;  
                }
                lcount[j]=lcount[j-1];
            }
             
        }
       i=j;
    }
    //for right array
    //filling the counter array
   
   for (int i=0;i<sizer;)
    {
        rcount[i]=1;
        for(j=i+1;j<sizer;j++)
        {
            rcount[j]=1;
            if(right[i]!=right[j])
           {
                 i=j;
             break;
            }
            else
            {
                for (int l=i;l<j;l++)
                {
                  rcount[l]++;  
                }
                rcount[j]=rcount[j-1];
            }
             
        }
       i=j;
    }
      
    // searching the each value of left array and putting the final output as answer 
         long int final_answer=0;
         for(int i=0;i<N*N*N;i=i+lcount[i])
         {
            cout<<left[i]<<" ";
             cout<<"count"<<lcount[i]<<" ";
             int current_index;
             if(indicator)
             current_index=find_index(right,0,N*N*N-N,left[i]);
             else
             current_index=find_index(right,0,N*N*N,left[i]);
             if(current_index!=-1)
                 final_answer+=(lcount[i]*rcount[current_index]);
         }
    cout<<endl;
     for(int i=0;i<N*N*N;i=i+rcount[i])
         {
            cout<<right[i]<<" ";
             cout<<"count"<<rcount[i]<<" ";
     }
    
        cout<<final_answer;
       return (0);
}

