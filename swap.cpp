// QUESTION : Swaping the alternate elements of Array

#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size; i+=2) {
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<"Original Array: ";
    printArray(arr, n);
    cout<<endl;

    swapAlternate(arr, n);

    cout<<"New Array: ";
    printArray(arr, n);

}