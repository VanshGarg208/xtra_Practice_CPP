// QUESTION : Sorting the array containing 0 and 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr, int n) {
    for (int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}

void sortArray(vector<int>& arr, int n) {
    int i = 0, j = n-1;

    while (i < j) {

        while (arr[i] == 0 && i < j) {
            i++;
        }

        while (arr[j] == 1 && i < j) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements (0 n 1): ";
    for (int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }

    sortArray(arr, n);
    cout<<"Output: ";
    printArray(arr, n);

}