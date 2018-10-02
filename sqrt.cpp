#include <iostream>
using namespace std;
int sqrt_helper(int a,int b,int m)
{
if(((a+b)/2)*((a+b)/2)==m)
return ((a+b)/2);
else if(((a+b)/2)*((a+b)/2)>m)
return (sqrt_helper(a,(a+b)/2,m));
else
{
    if((((a+b)/2)+1)*(((a+b)/2)+1)>m)
        return((a+b)/2);
    else
        return(sqrt_helper((a+b)/2,b,m));
}

}

int main() {
	// your code goes here
	int a=sqrt_helper(0,8,8);
	cout<<a;
	return 0;
}

