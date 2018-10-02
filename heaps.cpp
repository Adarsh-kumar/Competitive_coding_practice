#include<bits/stdc++.h>
using namespace std;

class heap
{
int *harr;
int heap_size;
public:
heap(int n);
void insert(int x);
void deletekey(int i);
void min_heapify(int i);
int get_min();
void decreasekey(int x,int y);
vector<int> heap_sort();
int extract_min();
};

heap::heap(int n)
{
this->harr=new int[n];
this->heap_size=0;
}

void heap::insert(int x)
{
heap_size++;
harr[heap_size-1]=x;
int i=heap_size-1;
while (i != 0 && harr[(i-1)/2] > harr[i])
    {
       swap(harr[i],harr[(i-1)/2]);
       i = (i-1)/2;
    }
}

int heap::get_min()
{
return harr[0];
}

int heap::extract_min()
{
int root;
if(heap_size==0)
return INT_MIN;
if(heap_size==1)
{
heap_size--;
return harr[0];
}
else
{
root=harr[0];
harr[0]=harr[heap_size-1];
heap_size--;
min_heapify(0);
}
return root;
}

void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void heap::min_heapify(int i)
{
int left=2*i+1;
int right=2*i+2;
int smallest=i;

if(left<heap_size && harr[left]<harr[smallest])
smallest=left;

if(right<heap_size && harr[right]<harr[smallest])
smallest=right;

if(smallest!=i)
{
swap(&harr[i],&harr[smallest]);
min_heapify(smallest);
}
}

void heap::decreasekey(int i,int newval)
{
harr[i]=newval;
while(i!=0 && harr[(i-1)/2]>harr[i])
{
swap(&harr[i],&harr[(i-1)/2]);
i=(i-1)/2;
}
}

void heap::deletekey(int i)
{
decreasekey(i,INT_MIN);
extract_min();
}

vector<int> heap::heap_sort()
{
vector<int> ans;
//ans.push_back(harr[0]);
int N=heap_size-1;
cout<<heap_size<<endl;
for(int i=N;i>=1;i--)
{
swap(harr[i],harr[0]);
heap_size--;
min_heapify(0);
}

for(int i=0;i<=N;i++)
ans.push_back(harr[i]);

return ans;
}

int main()
{
    heap h(11);
    h.insert(3);
    h.insert(2);

    h.insert(5);
    h.insert(4);
    h.insert(45);
    h.decreasekey(2,0);
    h.deletekey(0);
    cout<<h.extract_min();
    vector<int> arr=h.heap_sort();
for(int i=0;i<arr.size();i++)
cout<<arr[i]<<" ";
    
    return 0;
}
