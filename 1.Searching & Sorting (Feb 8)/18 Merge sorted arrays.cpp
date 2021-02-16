#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i<n1 && j <n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}
 
void display(int arr[],int n1, int n2)
{
   for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
}
int main()
{
    int arr1[] = {1, 2, 4, 6, 8};
    int n1=5;
 
    int arr2[] = {2, 4, 6, 8, 10};
    int n2=5;
 
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
    display(arr3, int n1, int n2);
 
    return 0;
}
