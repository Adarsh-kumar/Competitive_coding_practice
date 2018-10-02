#include<iostream>
class X {
   void fun() volatile {
     // this is passed as hidden argument to fun(). 
     // Type of this is volatile X* 
    }
};
