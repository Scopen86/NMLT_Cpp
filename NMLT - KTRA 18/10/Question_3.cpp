#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;
    double sum = 1.0, sum_old = 0.0;
    int i = 1, factorial = 1;

    while (sum - sum_old > 0.001) {
        sum_old = sum;
        factorial *= i;   
        sum += pow(x, i) / factorial;
        i++;
    }   
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
