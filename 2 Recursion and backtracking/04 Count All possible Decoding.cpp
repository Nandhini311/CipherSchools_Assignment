#include<bits/stdc++.h>
using namespace std;

int count_decoding_digits(char *digits, int n)
{
  int ans[n+1]; 
  ans[0] = 1;
  ans[1] = 1;
for (int i = 2; i <= n; i++)
{
  ans[i] = 0;
  if (digits[i-1] > ‘0’)
  ans[i] = ans[i-1];
  if (digits[i-2] == ‘1’ || (digits[i-2] == ‘2’ && digits[i-1] < ‘7’) )
  ans[i] += ans[i-2];
}
  return ans[n];
}

int main()

{

char digits[15];
cin >> digits;
int n = strlen(digits);

cout<<count_decoding_digits(digits, n);
return 0;

}
