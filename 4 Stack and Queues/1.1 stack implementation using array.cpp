#include <bits/stdc++.h>
using namespace std;


struct Stack{
  int *arr;
  int cap;
  int top;
  Stack(int c)
  {
      cap = c;
      arr = new int[cap];
      top = -1;
  }

  void push(int x)
  {
      if(top == cap-1){cout<<"The stack is full";}
      else
      {
          top++;
          arr[top]=x;
      }
  }

  int pop()
  {
      if(top==-1) {cout<<"The stack is empty";}
      else
      {
          int del = arr[top];
          top--;
          return del;
      }
  }

  int peek()
  {
      if(top == -1) return -1;
      else
        return arr[top];
  }
  int size(){
    return (top+1);
  }

  bool isEmpty(){
  return top==-1;
  }
      };
int main()
{
  Stack s(10);
  s.push(5);
  s.push(10);
  s.push(15);
  cout<<s.pop()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;
  cout<<s.peek()<<endl;

  return 0;
  }
