#include<iostream>
#include<bits/stdc++.h>

using namespace std;


vector<string> f(const string& s) { 

      // Construct an object to parse strings 
      istringstream is(s); 
 
      // Vector to store data 
      vector<string> v; 

      // Read integer while possible and add it to the vector 
      int tmp; 
      while(is >> tmp) { 
           v.push_back(tmp); 
      } 
return v;
 } 


string f(const vector<int>& v) { 

      // Constucvt an object to do formatted output 
      ostringstream os; 

      // Copy all elements from vector<int> to string stream as text 
      tr(v, it) { 
           os << ' ' << *it; 
      } 

      // Get string from string stream 
      string s = os.str(); 

      // Remove first space character 
      if(!s.empty()) { // Beware of empty string here 
           s = s.substr(1); 
      } 

      return s; 
 } 


int main()
{
string="my name is adarsh"<<endl;

