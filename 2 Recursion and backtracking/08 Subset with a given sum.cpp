#include <bits/stdc++.h> 
using namespace std; 

void smallerproblem(int arr[], int n, vector<int> v, int sum) 
{ 
	if (sum == 0) { 
		for (auto x : v) 
			cout << x << " "; 
		cout << endl; 
		return; 
	} 
  
	if (n == 0) 
		return; 

	smallerproblem(arr, n - 1, v, sum); 
	v.push_back(arr[n - 1]); 
	smallerproblem(arr, n - 1, v, sum - arr[n - 1]); 
} 

void printAllSubsets(int arr[], int n, int sum) 
{ 
	vector<int> v; 
	smallerproblem(arr, n, v, sum); 
} 

int main() 
{ 
	int arr[] = { 4, 8, 2, 9, 10, 11 }; 
	int sum = 12; 
  int n=6;
	printAllSubsets(arr, n, sum); 
	return 0; 
} 
