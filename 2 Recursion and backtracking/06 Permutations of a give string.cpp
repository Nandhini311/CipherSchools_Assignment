#include<iostream>
using namespace std;

void Permutation(string str, int l, int r) {
   if(l== r)
      cout << str;
   else {
      for(int i = l; i<= right; i++) {
         swap(str[l], str[i]);
         Permutation(str, l + 1, r);
         swap(str[left], str[i]); 
      }
   }
}

int main() {
   string str = "DEF";
   int n = str.size();
   stringPermutation(str, 0, n-1);
}
