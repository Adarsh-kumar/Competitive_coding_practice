#include<iostream>
#include<vector>
#include<string>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
#define N 4
#define m 3

//finding same contact inside a list of contacts is a problem whre if a is related to b and b  is related to c then a and c will also be related ,this type of relation gives clue to apply grpah data  structure  

//rather than bfs print each connected components 

typedef struct contact
{
string field1,field2,field3;
}contact;


void buildGraph(contact arr[],int *mat[])
{
    // Initialize the adjacency matrix
      //int mat[N][N];
    for (int i=0; i<N; i++)
       for (int j=0; j<N; j++)
           mat[i][j] = 0;
 
    // Traverse through all contacts
    for (int i = 0; i < N; i++) {
 
        // Add mat from i to j and vice versa, if possible.
        // Since length of each contact field is at max some
        // constant. (say 30) so body execution of this for
        // loop takes constant time.
        for (int j = i+1; j < N; j++)
            if (arr[i].field1 == arr[j].field1 ||
                arr[i].field1 == arr[j].field2 ||
                arr[i].field1 == arr[j].field3 ||
                arr[i].field2 == arr[j].field1 ||
                arr[i].field2 == arr[j].field2 ||
                arr[i].field2 == arr[j].field3 ||
                arr[i].field3 == arr[j].field1 ||
                arr[i].field3 == arr[j].field2 ||
                arr[i].field3 == arr[j].field3)
            {
                mat[i][j] = 1;
                mat[j][i] = 1;
                break;
            }
    }
}

void connected_components_printer(int *mat[])
{
//take the coount of the number of times bfs runs 
bool visited[N];

for(int i=0;i<N;i++)
visited[i]=0;

for(int i=0;i<N;i++)
{
if(visited[i]==0)
{
queue<int> q;
q.push(i);
while(!q.empty())
{
int a=q.front();
q.pop();
cout<<a<<" ";
for(int i=0;i<N;i++)
{
if(mat[a][i]==1&&visited[i]==0)
{
visited[i]=1;
q.push(i);
}
}
}
}
cout<<endl;
}
}


int main()
{
contact contacts[N];
for(int i=0;i<N;i++)
{
cin>>contacts[i].field1>>contacts.field2>>contacts.field3;
}
int **mat = new int*[N];
 
    for (int i = 0; i < N; i++)
        mat[i] = new int[N];
 
buildGraph(contacts,mat);
connected_components_printer(mat);
return 0;
}

//function which will print the different connected components 



