//i8nsertion sort

#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,key;

    for (int i=0;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
        }
        arr[j+1]=key;
    }
    
}

int main(){
    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;

    int arr[num];
    cout<< "Enter Elements one by one"<<"\n";
    for (int i=0; i<num; i++){
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
