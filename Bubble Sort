// C++ program for implementation of Bubble sort

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {  bool flag=false;
        cout<<"PASS"<<i+1<<":\n";
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
              {swap(arr[j],arr[j+1]);
               flag=true;
              }
            cout<<"     ";
            for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }
      // IF no two elements were swapped by inner loop, then break
       if(flag==false )
        break;
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
    bubble_sort(arr,n);
    cout<<"\nSorted Array :";
    for(int i=0; i<n; i++)
        cout<<arr[i]<< " ";
    return 0;
}
