# include<iostream>
using namespace std;

void printParenthesesPairs(int pos, int n, int open, int close){
   static char str[100];
   if(close == n) {
      cout<<str<<endl;
      return;
   }
   else {
      if(open > close) {
         str[pos] = '}';
         printParenthesesPairs(pos+1, n, open, close+1);
      }
      if(open < n) {
         str[pos] = '{';
         printParenthesesPairs(pos+1, n, open+1, close);
      }
   }
}
int main() {
   int n = 3;
   if(n > 0)
      printParenthesesPairs(0, n, 0, 0);
   return 0;
}
