// QUESTION : Find the triplet sum of the target

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            for (int k = j+1; k < arr.size(); k++) {

                vector<int> temp;

                if (arr[i] + arr[j] + arr[k] == s) {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int s;
    cout<<"Enter target(s): ";
    cin>>s;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }

    vector<vector<int>> result = triplet(arr, s);
    cout<<"Req Pairs: ";
    for (int i = 0; i < result.size(); i++) {
        cout<<"["<<result[i][0]<<", "<<result[i][1]<<", "<<result[i][2]<<"]";
        if (i != result.size() - 1) {
            cout<<" , ";
        }
    }

}