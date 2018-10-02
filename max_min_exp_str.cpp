#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool  isoperator(char c)
{
return(c=='+'||c=='*');
}

void printMinAndMaxValueOfExp(string str)
{
vector<int> numbers;
vector<char> op;

for(int i=0;i<str.size();i++)
{
if(isoperator(str[i]))
op.push_back(str[i]);
else
numbers.push_back(str[i]-48);
}

int len=numbers.size();

long long  maxval[len][len];
long long  minval[len][len];

for(int i=0;i<len;i++)
{
for(int j=0;j<len;j++)
{
maxval[i][j]=0;
minval[i][j]=INT_MAX;

if(i==j)
maxval[i][j]=minval[i][j]=numbers[i];

}
}



for(int size=2;size<=len;size++)
{
for(int i=0;i<=len-size;i++)
{
int j=i+size-1;
//k will go 1 less than the end of the array and end is also i less then adding the size
for(int k=i;k<j;k++)
{
if(op[k]=='+')
{
minval[i][j]=min(minval[i][k]+minval[k+1][j],minval[i][j]);
maxval[i][j]=max(maxval[i][j],maxval[i][k]+maxval[k+1][j]);
}
else if(op[k]=='*')
{
minval[i][j]=min(minval[i][k]*minval[k+1][j],minval[i][j]);
maxval[i][j]=max(maxval[i][j],maxval[i][k]*maxval[k+1][j]);
}

}

}
}


//cout<<endl;

  cout <<maxval[0][len - 1]<<" "<<minval[0][len - 1]<<endl;


}

int main()
{
    //string expression = "1+2*3+4*5";
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
    printMinAndMaxValueOfExp(s);
}

    return 0;
}
