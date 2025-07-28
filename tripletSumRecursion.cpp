// QUESTION : Finding triplet according to target through recursion

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

void print_Output(vector<vector<int>> result, int index = 0) {
    if (index == result.size()) {
        return;
    }

    cout<<"["<<result[index][0]<<", "<<result[index][1]<<", "<<result[index][2]<<"]";
    if (index != result.size() - 1) {
        cout<<" , ";
    }

    print_Output(result, index+1);
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int s;
    cout<<"Enter s(target): ";
    cin>>s;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }

    print_Output(triplet(arr, s));

}