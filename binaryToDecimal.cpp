// QUESTION : Convert the binary to decimal

#include <iostream>
#include <math.h>
using namespace std;

int b2d(int n) {
    int i = 0, ans = 0;
    while (n != 0) {

        int digit = n % 10;

        if (digit == 1) {
            ans = ans + pow(2, i);
        }

        n /= 10;
        i++;
    }

    return ans;
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Answer: "<<b2d(n);

}