#include <bits/stdc++.h>
using namespace std;
char mat[50][50];
int visited[50][50];
int countv=0; // hold the final answer for each case
int n,m; // row and column

int visited_count=0;

int min_steps_to_clean(int i,int j,int steps)
{
int r[]={0,-1,0,1};
int l[]={-1,0,1,0};

for(int k=0;k<4,;i++)
{
int row=i+r[k];
int col=j+r[k];

if(row>=0&&row<n&&col>=0&&col<m&&visited[i][j]==0)
{
visited[row][col]=1;

if(mat[i][j]='*')
visited_count++;

if(visited_count==v)
return steps;

else
return (min_steps_to_clean(min_steps_to_clean(row,col,steps+1);

















int main()
{
scanf("%d%d",&n,&m);
/*Loop runs till both n and m are non-zero*/
while(n && m)
{
countv=0;
caseCount++;
for(int i=0;i<n;++i)
   for(int j=0;j<m;++j)
   {
        cin>>mat[i][j];
        visited[i][j]=0;
   }


 for(int i=0;i<n;++i)
           for(int j=0;j<m;++j)
           {
                if(mat[i][j]=='o')
                {
                     visited[i][j]=1;
                     dfsTraversal(i,j,1);
                     break;
                }   
           } 

cout<<
