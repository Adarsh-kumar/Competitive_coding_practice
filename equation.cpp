#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//first step is to build the tree 
/*int frequency_counter(int* left,int N)
{
    int lcount[N];
    int j;
for (int i=0;i<N;)
    {
        lcount[i]=1;
        for(j=i+1;j<N;j++)
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
    return (lcount[4]);
}*/
int main ()
{
    int t,n;
    cin>>t;
    int size;
    int answer;
    while(t)
    {
        cin>>n;
        size=pow(n,1/4);
        answer=0;
     for(int i=0;i<=n;i++)
     {
         for(int j=0;j<=sqrt(n);j++)
         {
          for(int k=0;k<=cbrt(n);k++)
          {
            for(int l=0;l<=sqrt(sqrt(n));l++)
            {
              if(i+pow(j,2)+pow(k,3)+pow(l,4)==n)
                  answer++;
            }
          }
         }
     }
        t--;
        cout<<answer<<" ";
    }
    //cout<<find_index(a,0,5,5);
    //int result=frequency_counter(a,5);
    
    return 0;
}
