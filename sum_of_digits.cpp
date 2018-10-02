#include<iostream>
#include<vector>
#include<bits/stdc++.h>

int sum_no(int a ,int b)
{
return((b*(b+1))/2-(a*(a+1))/2);
}


int main()
{
int  a,b;
cin>>a>>b;
sum_no(a,b);
return 0;
}

