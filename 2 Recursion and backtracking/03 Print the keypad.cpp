#include <bits/stdc++.h>
using namespace std;
const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz"};
    
void printkeypad(int number[],int curr_index,int n, char output[])
{
    if(curr_index == n)
    {
        cout<<output<<",";
        return;
    }
    for(int i=0;i<strlen(keypad[number[curr_index]]);i++){
        output[curr_index] = keypad[number[curr_index]][i];  //i found this character
        printkeypad(number, curr_index+1, n, output);       //now recurssion u find the remaining
        if(number[curr_index]==1||number[curr_index]==0)
        {
            return;
        }
    }
}
    
int main()
{
   int number[] = {6,8,7};
   int = 3;
   char result[n+1];
   result[n] ='\0';
   printkeypad(number, 0, n, result);
   return 0;
}
