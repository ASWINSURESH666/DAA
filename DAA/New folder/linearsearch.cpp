/* Linear Search
Input: A sequence of 'n' numbers A = {a1,a2, ......,an} and a value 'V'.
Output: An idea i such that v = A[i] or the special value 'NIL' if v doesn't appearr in A */


#include<iostream>
using namespace std;

int linear_search (int A[] , int n, int v){
    for (int i=0;i<n; i++){
        if (A[i] == v){
            return i;
        }
    }
    return -1;
}

int main(){
    cout << "Enter the elements: ";
    int n;
    cin >> n;
    cout << "Insert the elements you need to put in the array: ";
    int A[n] ,v;

    for (int i=0; i < n; i++){
        cin >> A[i];
    }

    cout << "\n Enter the value to find or Print = ";
    cin >> v;

    int solution = linear_search(A, n, v);

    if (solution >= 0){
        cout << "Element founded at index: " << solution;
    }
    else{
        cout << "The Number is not in the Array";
    }
}