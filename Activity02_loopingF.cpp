#include <iostream>

using namespace std;

int main() {

    int rows = 9;
    for (int i = 0; i < rows; ++i) {
    for (int p = 0; p < i; ++p) {
    cout << '#';
    }
    cout << ' ';
    for (int p = 1; p < rows; ++p) {
    cout << '#';
    }
    cout << endl;
    }
    return 0;
}