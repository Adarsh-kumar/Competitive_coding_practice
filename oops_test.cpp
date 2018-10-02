#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
    public: 
    int id ; 
    private:
    string geekname; 
      
    // printname is not defined inside class defination 
    public:
    void printname()
{
cout << "Geekname is: " << this->geekname;

}
      
    // printid is defined inside class defination 
    void printid() 
    { 
        cout << "Geek id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 

int main() { 
      
    Geeks obj1; 
    obj1.geekname = "xyz"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 
