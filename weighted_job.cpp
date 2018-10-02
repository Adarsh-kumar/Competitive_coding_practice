#include<iostream>
#include<algorithm>
using namespace std;

//either include this job or not include the current job
typedef struct Job 
{
int start,finish,profit;
}job;

bool jobComparataor(job s1, job s2)
{
    return (s1.finish < s2.finish);
}

int latestNonConflict(job job[],int i)
{
for (int j=i-1; j>=0; j--)
    {
        if (job[j].finish <= job[i-1].start)
            return j;
    }
    return -1;
}
int findMaxProfitRec(job arr[], int n)
{
    // Base case
    if (n == 1) return arr[n-1].profit;
 
    // Find profit when current job is inclueded
    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr, n);
    if (i != -1)
      inclProf += findMaxProfitRec(arr, i+1);
 
    // Find profit when current job is excluded
    int exclProf = findMaxProfitRec(arr, n-1);
 
    return max(inclProf,  exclProf);
}
 

int findMaxProfitdp(job arr[],int n)
{
int dp[n];
for(int i=0;i<n;i++)
{
if(i==0)
dp[i]=arr[i].profit;
else
{
int j=latestNonConflict(arr,i);
if(j!=-1)
dp[i]=max(arr[i].profit+dp[j],dp[i-1]);
else
dp[i]=max(arr[i].profit,dp[i-1]);
}
}
return dp[n-1];
}

//maximum profit is equal to the 
int maximum_profit_finder(job job[],int n)
{
sort(job,job+n,jobComparataor);
return (findMaxProfitdp(job,n));
}

int main()
{
    Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The optimal profit is " << maximum_profit_finder(arr, n);
    return 0;
}
