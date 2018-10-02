#include<iostream>
using namespace std;


void tower_of_hannoi_solver(int n,int from_rod,int to_rod,int aux_rod)
{
if(n==1)
cout<<"move disk 1 from rod "<< from_rod<<"to_rod "<<to_rod<<endl;
else
{
tower_of_hannoi_solver(n-1,from_rod,aux_rod,to_rod);
cout<<"move disk n from_rod"<<from_rod<<"to_rod "<<to_rod<<endl;
tower_of_hannoi_solver(n-1,aux_rod,to_rod,from_rod);
}
}
int main()
{
    int n =10;
    tower_of_hannoi_solver(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
