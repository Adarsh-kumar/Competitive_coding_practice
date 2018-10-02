#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum(int a ,int b)
{
if(a<b)
return a;
else
return b;
}

int main()
{
int h,d,c,n;
int hour,min;
cin>>hour>>min>>h>>d>>c>>n;
int diff;
if(hour<=20)
diff=(20-hour)*60+(60-min);
else
diff=((24-hour)+20)*60+(60-min);
int no1,no2;
if((h+diff*d)%n==0)
no1=(h+diff*d)/n;
else
no1=(h+diff*d)/n +1;

if(h%n==0)
no2=h/n;
else
no2=h/n +1;

cout<<minimum(no1*(0.8*c),no2*c);
return 0;
}

