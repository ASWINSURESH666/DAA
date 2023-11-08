#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,key;

    for (int i=0;i<n;i++){
        key=arr[i+1];
        j=j+1;
        while i>0 && A[i]>key;
        A[i+1]=A[i]
        i=i-1;
    A[i+1]=key;
    }
}

int main(){
    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;

    int arr[num];
    cout<< "Enter Elements one by one"<<"\n";
    for (int i=0; i<num; i++;){
        cin>>arr[i];
    }
    cout<<"Entered Array"<<"\n";
    for (int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    insertion_sort(arr, num);
    cout<<"Sorted Array"<<"\n";
    for (int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }

}