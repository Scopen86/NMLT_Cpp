#include <iostream>
using namespace std;

int main() {
    int i, factorial = 1;
    cin >> i;
    for (int j = i; j > 0; j--) {
        factorial *= j;
    }
    cout << factorial << endl;
    return 0;
}   
