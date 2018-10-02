#include <bits/stdc++.h>

using namespace std;

// Complete the quickestWayUp function below.
int quickestWayUp(vector<vector<int>> ladders, vector<vector<int>> snakes) {

    vector<int> *ludo;
    vector<int>  l_start;
    vector<int> s_end;
    
    //preprcess to avoid the snake and ladder togetther 
    
   
    for(int i=0;i<ladders.size();i++)
        l_start.push_back(ladders[i][0]);
    
    
    for(int i=0;i<snakes.size();i++)
        s_end.push_back(snakes[i][0]);
    
         for(int i=0;i<ladders.size();i++)
    {
        for(int j=0;j<snakes.size();j++)
        {
            if(ladders[i][1]==snakes[j][0])
                ladders[i][1]=snakes[j][1];
            
        }
    }
    
          for(int i=0;i<snakes.size();i++)
    {
        for(int j=0;j<ladders.size();j++)
        {
            if(snakes[i][1]==ladders[j][0])
                snakes[i][1]=ladders[j][1];
            
        }
    }
    
        
    ludo=new vector<int>[101];
    bool flag=0;
    for(int i=1;i<=100;i++)
    {
    for(int j=i+1;j<=i+6&&j<=100;j++)
    {
      for(int k=0;k<ladders.size();k++)
      {
          if(ladders[k][0]==j)
          {
              flag=1;
              ludo[i].push_back(ladders[k][1]);
          }
          else if(snakes[k][0]==j)
          {
              ludo[i].push_back(snakes[k][1]);
              flag=1;
          }
      }
    
        ludo[i].push_back(j);
    }
    }
    
//     for(int i=0;i<ladders.size();i++)
//     {
//         ludo[ladders[i][0]].push_back(ladders[i][1]);
//     }
    
    
// for(int j=0;j<snakes.size();j++)
// {
//     ludo[snakes[j][0]].push_back(snakes[j][1]);
// }
    
set< pair<int ,int> > s;
    s.insert(make_pair(0,1));
    
    for(int i=2;i<=100;i++)
    {
        s.insert(make_pair(INT_MAX,i));
    }
    vector<int> dist(101);
    for(int i=0;i<=100;i++)
    {
        dist[i]=INT_MAX;
    }
    while(!s.empty())
    {
    pair<int ,int> curr=*s.begin();
    
        s.erase(s.begin() );
    vector<int>::iterator it;
    int u=curr.second;
    int curr_dist=curr.first; 
    int cost=1;
    for(it=ludo[u].begin();it!=ludo[u].end();it++)
    {
        int v=*it;
    if(curr_dist+cost<dist[v])
    {
        s.erase(make_pair(dist[v],v));
        dist[v]=curr_dist+1;
        s.insert(make_pair(dist[v],v));
    }
    }
    

}
    
    return dist[100];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> ladders(n);
        for (int i = 0; i < n; i++) {
            ladders[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> ladders[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int m;
        cin >> m;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> snakes(m);
        for (int i = 0; i < m; i++) {
            snakes[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> snakes[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int result = quickestWayUp(ladders, snakes);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

