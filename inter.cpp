#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2, int n, int m) {

    int i = 0, j = 0;
    vector<int> ans;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    while(i < n && j < m) {

        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j]) {
            i++;
        }

        else {
            j++;
        }
    }

    return ans;
}

int main() {

    int n, m;
    cout<<"Enter n and m: ";
    cin>>n>>m;

    vector<int> arr1(n);
    cout<<"Enter arr1: ";
    for (int i = 0; i < n; i++) {
        cin>>arr1[i];
    }

    vector<int> arr2(m);
    cout<<"Enter arr2: ";
    for (int i = 0; i < m; i++) {
        cin>>arr2[i];
    }

    vector<int> result = intersection(arr1, arr2, n, m);

    cout<<"Intersection: ";
    for (int val : result) {
        cout<<val<<" ";
    }

    cout<<endl;


}