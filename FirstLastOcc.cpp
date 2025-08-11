// QUESTION : Printing First and last occurance of key

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e) {

        if (key == arr[mid]) {
            ans = mid;
            e = mid-1;
        }

        else if (key < arr[mid]) {
            e = mid-1;
        }

        else if (key > arr[mid]) {
            s = mid+1;
        }

        mid = s + (e-s)/2;

    }

    return ans;

}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e) {
        
        if (key == arr[mid]) {
            ans = mid;
            s = mid+1;
        }

        else if (key < arr[mid]) {
            e = mid-1;
        }

        else if (key > arr[mid]) {
            s = mid+1;
        }

        mid = s + (e-s)/2;

    }

    return ans;

}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<"First occ of "<<key<<" is at index: "<<firstOcc(arr, n, key)<<endl;
    cout<<"Last occ of "<<key<<" is at index: "<<lastOcc(arr, n, key);

}