#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int dictionaryContains(string word)
{
    string dictionary[] = {"mobile","samsung","sam","sung",
                            "man","mango","icecream","and",
                             "go","i","like","ice","cream"};
    int size = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < size; i++)
        if (dictionary[i].compare(word) == 0)
           return true;
    return false;
}


int wordBreak(string word)
{
//kind of matrix chain
int size=word.size();
int dp[size][size];

memset(dp,0,sizeof(dp));

for(int s=0;s<size;s++)
{
for(int i=0;i<size-s;i++)
{
dp[i][i+s]=dictionaryContains(word.substr(i,i+s));
for(int j=i;j<i+s;j++)
{
dp[i][i+s]=max(dp[i][j],dp[j+1][i+s]);
}
}
}

return dp[0][size-1];
}


int main()
{
    wordBreak("ilikesamsung")? cout <<"Yes\n": cout << "No\n";
    wordBreak("iiiiiiii")? cout <<"Yes\n": cout << "No\n";
    wordBreak("")? cout <<"Yes\n": cout << "No\n";
    wordBreak("ilikelikeimangoiii")? cout <<"Yes\n": cout << "No\n";
    wordBreak("samsungandmango")? cout <<"Yes\n": cout << "No\n";
    wordBreak("samsungandmangok")? cout <<"Yes\n": cout << "No\n";
    return 0;
}

