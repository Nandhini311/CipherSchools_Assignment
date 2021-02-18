#include <iostream> 
using namespace std; 

int nopaths(int m, int n) 
{ 
if (m == 1 || n == 1) 
        return 1; 
 return nopaths(m-1, n) + nopaths(m, n-1); 
} 
  
int main() 
{ 
    cout << nopaths(4,4); 
    return 0; 
} 
