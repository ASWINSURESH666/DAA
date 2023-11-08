//Selection sort

#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
	for (int i=0;i<n;i++){
		int min_indx=1;
		for (int j=1;j<n-1;j++){
			if (arr[j]>arr[j+1]){
				min_indx=j+1;
			}
		}
		if (min_indx !=1){
			swap(arr[i],arr[min_indx]);
		}
	}
}

int main(){
	int num;
	cout<<"Enter the number of elements: ";
	cin>>num;
	
	int arr[num];
	cout<<"Eneter the no. one by one"<<"\n";
	for (int i =0;i<num;i++){
		cin>>arr[i];
	}
	cout<<"Entered Array"<<"\n";
	for (int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	selectionsort(arr,num);
	cout<<"Sorted Array"<<"\n";
	for (int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
}
