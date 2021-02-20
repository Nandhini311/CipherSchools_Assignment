#include <iostream> 
#include <stack> 
using namespace std;

void Smaller(int arr[], int n) 
{ 
	stack<int> S; 
 
	for (int i=0; i<n; i++) 
	{ 
		while (!S.empty() && S.top() >= arr[i]) 
			S.pop(); 

		if (S.empty()) 
			cout << " "; 
			cout << S.top() << ", "; 
		S.push(arr[i]); 
	} 
} 

int main() 
{ 
	int arr[] = {1, 3, 0, 2, 5}; 
	int n = 5; 
	Smaller(arr, n); 
	return 0; 
} 
