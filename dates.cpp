#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the solve function below.


map<string,int >  build_the_map()
{  
    map<string ,int> my_map;

 int count=1;
 int days_count;
    
for(int i=2018;i<=2020;i++)
{
for(int j=1;j<=12;j++)        
{
    if(j==8||j%2!=0)
        days_count=31;
    else if(j==2&&i<2020)
        days_count=28;
    else if(j==2&&i==2020)
        days_count=29;
    else
        days_count=30;
    
for(int k=1;k<=days_count;k++)
{
    string year,month,day;
    
year =to_string(i);
    if(j>=10)
    month=to_string(j);
    else
        month="0"+to_string(j);
    if(k<10)
        day="0"+to_string(k);
    else
        day=to_string(k);
    
    string s=year+"-"+month+"-"+day;
              
    cout<<s<<endl;
              my_map[s]=count;
    count++;
                
            }
        }
    }
    
    return my_map;


}

bool comp_it(pair<int,int> a,pair<int,int > b)
{
    return(a.first>b.first);
    
}

struct Compare {
     bool operator()(pair<int, int> const & a,
                              pair<int, int> const & b) 
    { 
        if(a.first<b.first)
        return a.first < b.first; 
        else
            return a.second>b.second;
        
}
};

string solve(vector<vector<string>> reservations) {

map<int,int > ans_map;
    
    map<string ,int > my_map;
    my_map=build_the_map();


for(auto it=my_map.begin();it!=my_map.end();it++)
{
cout<<it->first<<" "<<it->second<<endl;
}

priority_queue<pair<int,int > ,std::vector<pair<int,int> > ,Compare > q;
    
    for(int i=0;i<reservations.size();i++)
    {
        int start=my_map[reservations[i][0]];
        int end=my_map[reservations[i][1]];
        
        for(int i=start;i<=end;i++)
        {
            int cur=ans_map[start]++;
            q.push(make_pair(cur,start));
                   
        }
        
    }
    
    int top=q.top().second;
    string ans_st;
    for(auto it=my_map.begin();it!=my_map.end();it++)
    {
        if(my_map[it->first]==top)
            ans_st=my_map[it->first];
    }
    //string st2="2020-12-31";
    //cout<<to_string(2020)+to_string(12)+to_string(31)<<endl;
    //cout<<my_map[st2];
    
    return ans_st;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<vector<string>> reservations(n);

        for (int i = 0; i < n; i++) {
            reservations[i].resize(2);

            string reservations_row_temp_temp;
            getline(cin, reservations_row_temp_temp);

            vector<string> reservations_row_temp = split(rtrim(reservations_row_temp_temp));

            for (int j = 0; j < 2; j++) {
                string reservations_row_item = reservations_row_temp[j];

                reservations[i][j] = reservations_row_item;
            }
        }

        string result = solve(reservations);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

