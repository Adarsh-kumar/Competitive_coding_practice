#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


/*
 * Complete the function below.
 */
typedef struct cubes
{
int a;
int no;
public:
cubes(void){};
cubes(int a,int b)
{
this->a=a;
this->no=b;
}
}cubes;

typedef struct cylinder
{
int r;
int capacity;
public:
cylinder(void){};
cylinder(int a,int b)
{
this->r=a;
this->capacity=b;
}
}cylinder;

bool comp1(cubes one,cubes two)
{
return(one.a<two.a);
};

bool comp2(cylinder one,cylinder two)
{
return(one.r<two.r);
};

int maximumPackages(vector<int> S, vector<int> K, vector<int> R, vector<int> C) {
    
    cubes cb[S.size()];
   
    cylinder cl[R.size()];
    
    for(int i=0;i<S.size();i++)
        cb[i]=cubes{S[i],K[i]};
    
    
        for(int i=0;i<C.size();i++)
          cl[i]=cylinder{R[i],C[i]};
    
    sort(cb,cb+S.size(),comp1);
    sort(cl,cl+R.size(),comp2);
    
    int lo;
    int hi;
    int ans=0;
    int j=0;
    for(int i=0;j<R.size()&&i<K.size();)
    {
     hi=R.size();
lo=j;
while(lo<hi)
{
int mid=lo+(hi-lo)/2;
if(cl[mid].r<=cb[i].a)
{
lo=mid+1;
}
else
{
hi=mid;
}
}
        if(cb[i].no<=cl[lo].capacity)
        {
cl[lo].capacity-=cb[i].no;
             ans+=cb[i].no;
        i++;
        }
        else
        {
        cl[lo].capacity=0;
            cb[i].no-=cl[lo].capacity;
              ans+=cl[lo].capacity;
            
        }
       
        if(cl[lo].capacity==0)
            j=lo+1;
            
        
    }
    
    //solve with greedy approach
    
    
    // Return the maximum number of packages that can be put in the containers.
return ans;

}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);
    int m = stoi(nm[1]);

    int S_size;
    cin >> S_size;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string S_str_temp;
    getline(cin, S_str_temp);

    vector<string> S_str = split_string(S_str_temp);

    vector<int> S(S_size);
    for (int S_i = 0; S_i < S_size; S_i++) {
        int S_item = stoi(S_str[S_i]);

        S[S_i] = S_item;
    }

    int K_size;
    cin >> K_size;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string K_str_temp;
    getline(cin, K_str_temp);

    vector<string> K_str = split_string(K_str_temp);

    vector<int> K(K_size);
    for (int K_i = 0; K_i < K_size; K_i++) {
        int K_item = stoi(K_str[K_i]);

        K[K_i] = K_item;
    }

    int R_size;
    cin >> R_size;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string R_str_temp;
    getline(cin, R_str_temp);

    vector<string> R_str = split_string(R_str_temp);

    vector<int> R(R_size);
    for (int R_i = 0; R_i < R_size; R_i++) {
        int R_item = stoi(R_str[R_i]);

        R[R_i] = R_item;
    }

    int C_size;
    cin >> C_size;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string C_str_temp;
    getline(cin, C_str_temp);

    vector<string> C_str = split_string(C_str_temp);

    vector<int> C(C_size);
    for (int C_i = 0; C_i < C_size; C_i++) {
        int C_item = stoi(C_str[C_i]);

        C[C_i] = C_item;
    }

    int result = maximumPackages(S, K, R, C);

    fout << result << "\n";

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
