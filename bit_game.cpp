#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.

bool power_of_two(long n)
{
    int count=0;
for(int k=0;k<64;k++)
{
if(n& (1 << k))
    count++;
}
    return (count==1);

}

int set_last(long n)
{
int last=0;
    
for(int k=0;k<64;k++)
    
{
    if(n&(1 << k))
        last=k;
}
    return last;
    
}
string counterGame(long n) {
    bool flag;
    
    if(power_of_two(n))
    {
        cout<<"here"<<endl;
        int k=set_last(n);
        cout<<k<<endl;
        if(k%2==0)
            flag=1;
        else
            flag=0;
    }
    
    else
    {
        int k=set_last(n);
        cout<<"here";
        cout<<k<<"p"<<endl;
        if(k%2==0)
            flag=0;
        else
            flag=1;
    }
      
    
    if(flag==0)
        return "Richard";
    else
        return "Louise";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

