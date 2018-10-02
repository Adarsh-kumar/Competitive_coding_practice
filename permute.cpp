#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int get_number(vector<int>  digits)
{
int number=0;
int size=digits.size()-1;
for(int i=0;i<digits.size();i++)
{
number+=digits[i]*pow(10,size-i);
}
return number;
}

int main()
{
int a,b;
cin>>a>>b;
int i=0;
vector<int> digits;
while(int(a/(pow(10,i)))!=0)
i++;
i--;
while(i>=0)
{
digits.push_back(a/pow(10,i));
int temp3=pow(10,i);
a=a%temp3;
i--;
}
int n=digits.size();
sort(digits.begin(),digits.end(),std::greater<int>());
i=0;
while(i<n)
{
int temp=get_number(digits);
if(temp<b)
{
 cout<<temp;
return 0;
}
else
{
int temp2=digits[i];
digits[i]=digits[i+1];
digits[i+1]=temp2;
}
i++;
}

return 0;
}


