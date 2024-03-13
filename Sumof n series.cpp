#include<iostream>
#include<cmath>
using namespace std;

double sum(int n) {
    double S = 0.0;

    for(int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);

        if(i % 2 == 0) {
            S = S - term;
        } else {
            S = S + term;
        }
    }

    return S;
}

int main() {
    int n;

    cout << "Enter the number of terms you want in the series: ";
    cin >> n;

    double result = sum(n);

    cout << "Sum is " << result;

    return 0;
}
