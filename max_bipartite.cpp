#include<iostream>
#include<bits/stdc++.h>
#define M 6
#define N 6

using namespace std;



bool bpm(bool bpGraph[M][N],bool seen[],int u,int match[])
{
for(int i=0;i<N;i++)
{
if(!seen[i]&&bpGraph[u][i])
{
seen[i]=true;
//check if the job is not assigned or if the job assigned can be negotiated with otherr job

if(match[i]<0 || bpm(bpGraph,seen,match[i],match))
{
match[i]=u;
return true;
}

}
}

return false;
}

int max_bpm(bool bpGraph[M][N])
{
int match[N];

memset(match,-1,sizeof(match));

 int result = 0; 
    for (int u = 0; u < M; u++)
    {
        // Mark all jobs as not seen 
        // for next applicant.
        bool seen[N];
        memset(seen, 0, sizeof(seen));
 
        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph,seen,u, match))
            result++;
    }
    return result;

}

int main()
{
    
    bool bpGraph[M][N] = {{0, 1, 1, 0, 0, 0},
                          {1, 0, 0, 1, 0, 0},
                          {0, 0, 1, 0, 0, 0},
                          {0, 0, 1, 1, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 1}};
 
    cout << "Maximum number of applicants that can get job is "
         << max_bpm(bpGraph);
 
    return 0;
}
