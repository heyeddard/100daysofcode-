// CPP program to sort a string in descending 
// order using library function 
#include <bits/stdc++.h> 
using namespace std; 
  
void descOrder(string s) 
{ 
    sort(s.begin(), s.end(), greater<char>()); 
} 
  
int main() 
{ 
    string s = "geeksforgeeks"; 
    descOrder(s); // function call 
    return 0; 
} 
