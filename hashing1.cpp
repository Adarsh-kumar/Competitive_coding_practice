#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> digit_counter(int number)
{
    int no_of_digits=0;
    vector<int> ans;
    while(int(number/pow(10,no_of_digits))!=0)
    {
        no_of_digits++;
    }
    for(int i=no_of_digits-1;i>=0;i--)
    {
        ans.push_back(int(number/pow(10,i)));
        number=int(number)%int(pow(10,i));
    }
    return (ans);
}

int colorful(int A) {
    vector<int> digit=digit_counter(A);
    unordered_map<int ,int> frequency;
    for(int i=1;i<=digit.size();i++)
    {
    for(int j=0;j<digit.size();j++)
    {
        int temp=0;
        while(i--)
        {
            if((j+i-1)>=digit.size())
            break;
            temp*=digit[j+i-1];
            frequency[temp]++;
            if(frequency[temp]>1)
            return 0;
        }
    }
    
}
 unordered_map<int, int>:: iterator p;
    for (p = frequency.begin(); p != frequency.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";
return digit.size();
}

int main()
{
int n=123;
cout<<colorful(n)<<endl;
return 0;
}


