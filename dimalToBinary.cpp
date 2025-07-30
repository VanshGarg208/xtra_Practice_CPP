#include <iostream>
#include <math.h>
using namespace std;

int d2b(int n) {
    int ans = 0;
    int i = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;
        ans += bit * place;
        place *= 10;

        n = n >> 1;
        i++;
    }

    return ans;
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Answer: "<<d2b(n);

}