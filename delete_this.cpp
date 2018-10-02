#include<iostream>
using namespace std;

class Test
{
private:
int x;
int y;
public:
Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
void setX(int a) { x = a; }
void setY(int b) { y = b; }
//void destroy() { delete this; }
void fun(Test *a) volatile {
this=a;
     // this is passed as hidden argument to fun(). 
     // Type of this is volatile X* 
    }
void print() { cout << "x = " << this->x << " y = " << this->y << endl; }
};

int main()
{
Test obj();
//obj.destroy();
Test* obj2=new Test(5,10);
obj.fun(obj2);
obj.print();
return 0;
}

