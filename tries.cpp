#include<bits/stdc++.h>
using namespace std;

//no need to put a character variable since we 
//will just check wheather the node at corresponding index iss null or not
const int alphabet_size = 26;

typedef struct trie_node
{
struct trie_node* children[alphabet_size];
bool islastnode;
trie_node()
{
this->islastnode=false;
}

}trie_node;

//a function to initialise the trie node when a new characterr is inserted
trie_node* initialise_the_trie(void)
{
trie_node* root=new trie_node;
root->islastnode=false;


for(int i=0;i<alphabet_size;i++)
{
root->children[i]=NULL;
}

return (root);
}

void insert_in_trie(trie_node* root,string s)
{
int index;
trie_node* temp=root;
for(int i=0;i<s.size();i++)
{
index=s[i]-'a';
if(!temp->children[index])
{
temp->children[index]=initialise_the_trie();
}
temp=temp->children[index];
}


temp->islastnode=true;
}


bool search_in_trie(trie_node* root,string s)
{
int index;
trie_node* temp=root;
for(int i=0;i<s.size();i++)
{
index=s[i]-'a';
if(!temp->children[index])
return 0;
temp=temp->children[index];
}

    return(temp->islastnode==true);

}

void boggle_with_tries(string a[],int n)
{

int main()
{
    // Input keys (use only 'a' through 'z'
    // and lower case)
    string keys[] = {"theu", "a", "there",
                    "answer", "an", "by",
                     "bye", "these" };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    trie_node *root = initialise_the_trie();
 
    // Construct trie
    for (int i = 0; i < n; i++)
        insert_in_trie(root, keys[i]);
 
    // Search for different keys
    search_in_trie(root, "any")? cout << "Yes\n" :
                         cout << "No\n";
    search_in_trie(root, "these")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}
