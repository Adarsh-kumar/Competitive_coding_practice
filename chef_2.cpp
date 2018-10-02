#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 1000

typedef struct goods
{
float price;
int quantity;
int discount;
}goods;

int main()
{
int t,n;
cin>>t;

while(t)
{
cin>>n;
goods g[n];
float ans=0;
float x_bar;
for(int i=0;i<n;i++)
{
cin>>g[i].price>>g[i].quantity>>g[i].discount;
x_bar=(float(100+g[i].discount)/100)*g[i].price;
ans+=g[i].quantity*(g[i].price-x_bar*float(100-g[i].discount)/100);
}
printf("%.16lf\n", ans);
t--;
}
return 0;
}


