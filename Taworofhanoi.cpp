#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C) {
    if (n == 0) return;
    
    towerOfHanoi(n - 1, A, C , B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}