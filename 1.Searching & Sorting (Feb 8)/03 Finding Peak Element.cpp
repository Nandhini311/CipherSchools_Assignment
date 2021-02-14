
#include <iostream>

using namespace std;


//naive solution
int Peakelement(int arr[], int  n)
{
    if(n==1) return arr[0];
    if(arr[0]>=arr[1]) return arr[0];
    if(arr[n-1]>=arr[n-2]) return arr[n-1];  //checking if the corner elements are peak elements
    for(int i=1;i<n-1;n++)
    {
        if(arr[i]>=arr[i-1] && arr[i]<=arr[i+1])
           return arr[i];
    }
}

//efficient solution
int Peakelementefficient(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) &&           //if there is any neighbor element, it sees if its an peak element
           (mid == n-1 || arr[mid+1] <= arr[mid]))
           {
               return mid;
           }
        if(mid>0 && arr[mid-1]<=arr[mid])
          low = mid+1;
        else
          high = mid-1;
    }
}



int main()
{
    int arr[] = {10, 2, 4, 8, 3, 9, 30};
    cout<<Peakelement(arr, 7);
    cout<<endl;
    cout<<Peakelementefficient(arr, 7); //returns the peak elements position
    return 0;
}
