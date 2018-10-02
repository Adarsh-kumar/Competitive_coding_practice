#include<iostream>
#include<string>
using namespace std;
bool found;

/*int lcs (string a,string b)
{
int dp[a.size()];
for(int i=0;i<a.size();i++)
{
for(int j=0;j<b.size();j++)
{
if(a[i]==b[j])
{
found=1;
if(i!=0)
dp[i]=dp[i-1]+1;
else
dp[i]=1;
}
break;
}
if(!found)
dp[i]=dp[i-1];
}
return dp[a.size()-1];
}*/

void lcs(string a,string b)
{
int i;
int n=a.size();
int m=b.size();
int* matrix[n];

for(i=0;i<n;i++)
{
matrix[i]=new int[m];
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(i==0&&j==0)
matrix[i][j]=(a[i]==b[j]);
else if(i==0||j==0)
{
if(a[i]==b[j])
matrix[i][j]=1;
else if(i==0)
matrix[i][j]=matrix[i][j-1];
else
matrix[i][j]=matrix[i-1][j];
}
else if(a[i]==b[j])
matrix[i][j]=1+matrix[i-1][j-1];
else
matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
}
}

cout<<"lcs is "<<matrix[n-1][m-1]<<" ";

//further to print the lcsof the two strings

int index=matrix[n-1][m-1];

string result (index+1,'\0');

i=n-1;
int j=m-1;
while(i>=0&&j>=0)
{
if(a[i]==b[j])
{
result[index]=a[i];
i--;
j--;
index--;
}
else if(matrix[i-1][j]<matrix[i][j-1])
{
result[index]=a[i];
i--;
index--;
}
else if(matrix[i-1][j]>matrix[i][j-1])
{
result[index]=b[j];
j--;
index--;
}

else if(matrix[i-1][j]=matrix[i][j-1])
{
//result[index]=b[j];
i--;
//index--;
}

/*while(i>=0)
{
result[index]=a[i];
i--;
index--;
}
while(j>=0)
{
result[index]=b[j];
j--;
index--;
}*/

}

cout << result;
}
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}
 

int main()
{
string b="algorithm";
string a="rthym";
cout<<a.size();
lcs(a,b);
return 0;
}
