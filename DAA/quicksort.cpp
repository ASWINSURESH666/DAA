// Quick sort

#include <iostream>
using namespace std;



int partition(int A[],int lb,int ub)
{
	int pivot=A[lb];
	int start=lb;
	int end=ub;
	
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		while(A[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(A[start], A[end]);
		}
	}
	swap(A[lb],A[end]);
	return end;
}

void quicksort(int arr[],int lb,int ub)
{
	if (lb<ub)
	{
	int p=partition(arr, lb, ub);
	quicksort(arr,lb,p-1);
	quicksort(arr,p+1,ub);
	}
}


int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values with space-separated: ";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	
	int l=0;
	int u=n;
	quicksort(arr,l,u);
	
	cout<<" Sorted Quick Sort Array: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
