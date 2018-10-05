// C++ program for implementation of Selection Sort

#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {   // Find the minimum element in unsorted array
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swap(arr[i],arr[min]);// Swap the found minimum element with the first element
 cout<<"\nIteration"<<i+1<<" : ";
 for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    }
}

int main()
{
    int n;
    cout<<"Enter no. of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements in array :";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    selection_sort(arr,n);
    cout<<"\nSorted Array :";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
