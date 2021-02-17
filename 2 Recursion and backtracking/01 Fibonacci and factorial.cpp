#include <bits/stdc++.h>
using namespace std;

int fibonnaci(int n){
    if(n<=1)
      return 1;
    return fibonnaci(n-1)+fibonnaci(n-2);
}
int factorial(int n)
{
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main()
{
    cout<<factorial(5);
    cout<<endl;
    cout<<fibonnaci(5);
    return 0;
}
