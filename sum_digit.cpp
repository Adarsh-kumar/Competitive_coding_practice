#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool can(int m,int s)
{
return((s>=0&&m*9>=s));
}



int main()
{
int sum,n;
int temp;
cin>>n>>sum;
temp=sum;
string minn;
string maxn;
if((can(n,sum))||sum<=n)
{
for(int i=1;i<=n;i++)
{
if(temp>9)
{
maxn += char('0' + 9);
                temp-= 9;
}
else
{
maxn+=char('0' + temp);
                temp-= temp;
}
}
for(int i=1;i<=n;i++)
{
for(int d=0;d<10;d++)
{
//check by putting the lowest possible digit such that we can construct the tail
if(((i==1&&d>0)||(i>1))&&(can(n-i,sum-d)))
{
 minn += char('0' + d);
                sum -= d;
                break;
            }
}
}
}
else
{
cout<<-1<<" "<<-1<<endl;
}

cout<<minn<<" "<<maxn<<endl;

return 0;
}

