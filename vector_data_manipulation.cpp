#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//constant iterator for constant vector
void f(const vector<int>& v) { 
      int r = 0; 
      // Traverse the vector using const_iterator 
      for(vector<int>::const_iterator it = v.begin(); it != v.end(); it++) { 
           r += (*it)*(*it); 
      } 
      return r; 
 } 


//macros for traversing every type of container

#define tr(container,it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

int main()
{
 int data[5] = { 1, 5, 2, 4, 3 }; 
 vector<int> X(data, data+5); 
 int v1 = *max_element(X.begin(), X.end()); // Returns value of max element in vector 
 int i1 = min_element(X.begin(), X.end()) – X.begin; // Returns index of min element in vector 

 int v2 = *max_element(data, data+5); // Returns value of max element in array 
 int i3 = min_element(data, data+5) – data; // Returns index of min element in array 


return 0;
}

