#include<iostream>
using namespace std;

int coin_change(int rs,int* coin_array,int index_size)
{
if(rs==0)
return 1;
else if(rs<0)
        return 0;
    else if(index_size==0)
return (coin_change(rs-coin_array[index_size],coin_array,index_size));
 
    
    
else
return (coin_change(rs,coin_array,index_size-1)+coin_change(rs-coin_array[index_size],coin_array,index_size));
}


int coin_change_dp(int rs,int* coin_array,int index_size)
{
int mat[rs][index_size];
for(int i=0;i<rs;i++)
{
for(int j=0;j<index_size;j++)
{
if(i==0)
mat[i][coin_array[j]]=1;
else 
{
if(i-coin_array[j]<0)
mat[i][coin_array[j]]=mat[i][coin_array[j-1]];
else if(i-coin_array[j]==0)
mat[i][coin_array[j]]=1+mat[i][coin_array[j-1]];
else
mat[i][coin_array[j]]=mat[i-coin_array[j]][coin_array[j]]+mat[i][coin_array[j-1]];
}
}
}
cout<<mat[rs-1][coin_array[index_size-1]];
return 0;
}

int main()
{
int coin_array[]={2, 5, 3, 6};
int rs=10;
cout<<coin_change(rs,coin_array,3);
    return 0;
}

//bottom_up_approach_to_solve_coin_change
