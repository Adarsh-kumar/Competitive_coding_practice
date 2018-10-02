#include<iostream>
using namespace std;

typedef struct point
{
    int x,y;
}point;

int comparatorx(const void *p, const void *q) 
{
    int l = ((struct point *)p)->x;
    int r = ((struct point *)q)->x; 
    return (l-r);
}
int comparatory(const void *p, const void *q) 
{
    int l = ((struct point *)p)->y;
    int r = ((struct point *)q)->y; 
    return (l-r);
}

float return_maximum(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}
float distance_between_points(point a,point b)
{
    return(sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)+(a.y-b.y)));
}
void search_utility(point* a,int start,int n)
{
    int diff=(n-start)/2;
    if(diff==1)
    {
        return(distance_between_points(a[start],a[n]));
    }
    int d1=search_utility(a,0,mid);
    int d2=search_utility(a,mid+1,n);
    
        return(return_maximum(d1,d2));
}
    
void search(point* x,int n)
{
qsort(x,sizeof(point),comparatorx);
    search_utility(x,)

}
int main()
{
    qsort()
}
