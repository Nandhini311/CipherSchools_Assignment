#include <bits/stdc++.h>
using namespace std;
 
class Stack
{
    stack<int> s;      
    stack<int> aux;    
 
public:
    void push(int x)
    {
        s.push(x);
        if (aux.empty()) {
            aux.push(x);
        }
        else {
            if (aux.top() >= x) {
                aux.push(x);
            }
        }
    }

    int pop()
    {
        if (empty()) {
            cout << "Stack underflow!!";
            return -1;
        }
 
        int top = s.top();
        s.pop();

        if (top == aux.top()) {
            aux.pop();
        }
        return top;
    }

    int top()
    {
        return s.top();
    }

    int size()
    {
        return s.size();
    }
    bool empty()
    {
        return s.empty();
    }

    int min()
    {
        if (aux.empty()) {
            cout << "Stack underflow!! ";
            return -1;
        }
 
        return aux.top();
    }
};
 
int main()
{
    Stack s;
    s.push(6);
    cout << s.min();
    s.push(7);
    cout << s.min();
    s.push(8);
    cout << s.min();
    return 0;
}

