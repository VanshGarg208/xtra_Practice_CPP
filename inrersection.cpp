// QUESTION : Intersection between 2 arrays (arr1 and arr2)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> intercection(vector<int> &arr1, vector<int> &arr2, int n, int m) {

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int element = arr1[i];

        for (int j = 0; j < m; j++) {
            if (element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return ans;
}

int main() {

    int n, m;
    cout<<"Enter elements n(arr1) and m(arr2): ";
    cin>>n>>m;

    vector<int> arr1(n);
    cout<<"Enter arr1 elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr1[i];
    }

    vector<int> arr2(m);
    cout<<"Enter arr2 elements: ";
    for (int i = 0; i < m; i++) {
        cin>>arr2[i];
    }

    vector<int> result = intercection(arr1, arr2, n, m);

    cout<<"Intersection: ";
    for (int val : result) {
        cout<<val<<" ";
    }

}