#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_utility(int** mat,int a,int b)
{
stack<int> path;

if(a==0&&b==0)
{
cout<<"i m pushed"<<mat[a][b]<<" ";
path.push(mat[a][b]);
while(!path.empty())
{
cout<<path.top();
path.pop();
}
cout<<endl;
}


else if(a==0)
{
path.push(mat[a][b]);
print_utility(mat,a,b-1);
}


else if(b==0)
{
path.push(mat[a][b]);
print_utility(mat,a-1,b);
}


else
{
path.push(mat[a][b]);
print_utility(mat,a-1,b);
path.push(mat[a][b]);
print_utility(mat,a,b-1);
}

}

void print_all_the_paths(int** mat,int m,int n)
{
print_utility(mat,m-1,n-1);
}

int main()
{
int mj[2][3] = { {1, 2, 3}, {4, 5, 6} };
int n=2;
int m=3;

int** mat=new int*[n];;
for(int i=0;i<n;i++)
{
mat[i]=new int[m];
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
mat[i][j]=mj[i][j];
}
}

    print_all_the_paths(mat, 2, 3);
    return 0;
}
