#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // left half: 1 to i
        for (int j = 1; j <= i; j++)
            cout << j;

        // spacing that shrinks each row, hits 0 on the last row
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << " ";

        // right half: i down to 1
        for (int j = i; j >= 1; j--)
            cout << j;

        cout << "\n";
    }

    return 0;
}