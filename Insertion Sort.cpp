// C++ program for implementation of Insertion sort

#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int key;
    for(int i=1; i<n; i++)
    {
        key=arr[i];
        int  j=i-1;
        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        cout<<"\nIteration"<<i<<" : ";
        for(int i=0; i<n; i++)
            cout<<arr[i];

    }
}

int main()
{
    int n;
    cout<<"Enter no. of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"\nSorted Array : ";
    for(int i=0; i<n; i++)
        cout<<arr[i];
    return 0;
}
