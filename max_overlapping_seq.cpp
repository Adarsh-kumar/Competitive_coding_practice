
#include <bits/stdc++.h>
using namespace std;

int main()
{
   
        int t;
        cin >>t;
        while(t--){
            int n;
            cin >> n;
            assert(n >= 1 && n <= 100000);
            
            vector< pair<int,int> > vec;
            for(int i = 0; i < n; i ++ ){
                int s,e;
                cin >> s >> e;

                vec.push_back( make_pair(e,1));
                vec.push_back( make_pair(s,-1));
            }
            sort(vec.begin(), vec.end());
            int ans = 0, cum = 0;
            for(int i = 0; i < vec.size(); i ++){
                cum += vec[i].second;
                ans = max(ans , cum);
            }
            cout << ans << endl;
        }
    }
    
