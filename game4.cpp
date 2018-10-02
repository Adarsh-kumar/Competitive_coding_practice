#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

int n;
map<int, int> m;
vector<pair<int, int> > v;
long long f[maxn];

int main() {
    //freopen("input.txt", "r", stdin);
    cin>>n;
    while (n--) {
        int x ;
cin>>x;
        m[x]++;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }


    for (int i = 0; i < (int)v.size(); i++) {

        int pr = i - 1;
        //we donot want the numbers which are one less then the choosen number in next turn 
        while (pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        //if the index is zero while building the bottom up approach
        if (pr == -1) f[i] = 1LL * v[i].first * v[i].second;

        else f[i] = f[pr] + 1LL * v[i].first * v[i].second;

        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
}
