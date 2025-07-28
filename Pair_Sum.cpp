#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pair_sum(vector<int> arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {

            if (arr[i] + arr[j] == s) {
                vector<int> temp;

                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    return ans;
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int s;
    cout<<"Enter terget(s): ";
    cin>>s;

    vector<int> arr(n);
    cout<<"Enter elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }

    vector<vector<int>> result = pair_sum(arr, s);

    cout<<"Req Pair: ";
    for (int i = 0; i < result.size(); i++) {
        cout<<"["<<result[i][0]<<", "<<result[i][1]<<"]";
        if ( i != result.size() - 1) {
            cout<<" , ";
        }
    }


}