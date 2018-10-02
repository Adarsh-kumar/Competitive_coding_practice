#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void abc(void *a, int b)
{
   if(b==1)
      printf("%d",*(int*)a);     // If integer pointer is received
   else if(b==2)
      printf("%c",*(char*)a);     // If character pointer is received
   else if(b==3)
      printf("%f",*(float*)a);     // If float pointer is received
}

int main()
{
int a=10;
float b;
char c;
abc(&a,1);
return 0;
}
