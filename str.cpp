#include <bits/stdc++.h>

using namespace std;

// Complete the abbreviation function below.
string abbreviation(string a, string b) {
//easy dp
    //check if the lcs is of the same size as b
    int dp[a.size()][b.size()];
    for(int i=0;i<a.size();i++)
    {
for(int j=0;j<b.size();j++)
{
if(i==0&&j==0)
{
if(a[i]==b[j]||abs(a[i]-b[j])==32)
dp[i][j]=1;
else
    dp[i][j]=0;
}
else
{
    if (i==0)
    {
        if(a[i]==b[j]||abs(a[i]-b[j])==32)
            dp[i][j]=1;
        else
            dp[i][j]=dp[i][j-1];
}
 if (j==0)
    {
        if(a[i]==b[j]||abs(a[i]-b[j])==32)
            dp[i][j]=1;
        else
            dp[i][j]=dp[i-1][j];
}
   else if(a[i]==b[j]||abs(a[i]-b[j])==32)
        dp[i][j]=1+dp[i-1][j-1];
    
    else
        dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
}
}
    }
    
    if(dp[a.size()-1][b.size()-1]==b.size())
        return ("YES");
    else
        return ("NO");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        cout<< result << "\n";
    }

    fout.close();

    return 0;
}

