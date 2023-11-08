#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool swapped=false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        
        if(swapped==false)
        {
            break;
        }
    }
}

int main()
{
    int num;
    cout<<"Enter no. of elements: ";
    cin>>num;
    
    int arr[num];
    cout<<"Enter the elements one by one"<<"\n";
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    cout<<"The entered array: "<<"\n";
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    bubblesort(arr, num);
    cout<<"The sorted array: "<<"\n";
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}