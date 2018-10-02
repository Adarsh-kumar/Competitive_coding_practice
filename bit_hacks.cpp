#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void set_bit(int& a,int n)
{
a|=(1<<n);
}
void unset(int &num,int pos)
{
    //Second step is to bitwise and this  number with given number
    num &= (~(1 << pos));
}

void toggle(int &num,int pos)
{
    num ^= (1 << pos);
}

int lowest_set_bit(int num)
{
    int ret = num & (-num);
    return ret;
}

void strip_last_set_bit(int &num)
{
    num = num & (num-1);
}

void strip_the_most_set_bit(int &num)
{
    num = num & (num-1);
}

int main()
{
     int num = 4, pos = 1;
     set_bit(num, pos);
cout<<lowest_set_bit(17)<<endl;
     cout << (int)(num) << endl;
     return 0;
}
