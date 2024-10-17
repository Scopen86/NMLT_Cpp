#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 2 * N + 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j < N - abs(N - i) + 1 || j >= N + abs(N - i)) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
