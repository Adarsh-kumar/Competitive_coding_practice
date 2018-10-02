#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

bool isprime(int n)
{
    bool flag=1;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
flag=0;
}
    return (flag);
}
// Complete the primeXor function below.
int primeXor(vector<int> arr) {
    
    int n=arr.size();
    int dp[n];
    for(int i=0;i<n;i++)
    {
        if(isprime(arr[i]))
        dp[i]=1;
        else
            dp[i]=0;
    }

    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j>=0;j--)
        {

            if(isprime(arr[j]^arr[i]))
               temp+=1+dp[j];
        }
        if(i!=0)
        dp[i]=max(dp[i-1],temp);
    }
    int ans=0;
for(int i=0;i<n;i++)
ans+=dp[i];
    return (ans);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split_string(a_temp_temp);

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        int result = primeXor(a);

        fout << result << "\n";
        cout<<result<<endl;
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

