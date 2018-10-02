#include<iostream>
using namespace std;

void print_solution(int** solution ,int n )
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<solution[i][j]<<" ";
}
cout<<endl;
}
}

bool is_safe_position(int** board,int n ,int row,int col)
{
for(int j=0;j<col;j++)
{
if(board[row][j]==1)
return false;
}
for(int k=row,j=col;k>=0,j>=0;j--,k--)
{
if(board[k][j]==1)
return false;
}
for(int k=row,j=col;k<n,j>=0;k++,j--)
{
if(board[k][j]==1)
return false;
}
return true;
}

bool solve_nqueen_helper(int** board,int n,int col)
{
//helperr function to return the true if all queens are placed 
if(col>=n)
return true ;
for(int i=0;i<n;i++)
{
if(is_safe_position(board,n,i,col))
{
board[i][col]=1;
}
if (solve_nqueen_helper(board,n,col+1))
return true;
board[i][col]=0;

}
return false;
}

bool solveNQ(int** a,int n)
{
    if ( solve_nqueen_helper(a,n, 0) == false )
    {
      cout<<"Solution does not exist";
      return false;
    }
 
    print_solution(a,n);
    return true;
}
 
// driver program to test above function
int main()
{
int n;
cin>>n;
int* a[n];


//a=new int[n];
for (int i=0;i<n;i++)
{
a[i]=new int[n];
}
solveNQ(a,n);
//cout<<board[0][0];
//print_solution(a,n);
    return 0;
}

