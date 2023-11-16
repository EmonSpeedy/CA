#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, string A, string B, string C) {
    if(n == 1){
        cout << "Move disk " << n << " from " << A << " to " << C << "\n";
        return;
    }
    tower_of_hanoi(n - 1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << "\n";
    tower_of_hanoi(n - 1, B, A, C);
    return;
}

int main() {
    int n; cin >> n; 
    cout << "Total moves are : " << pow(2, n) - 1 << "\n";
    tower_of_hanoi(n, "A", "B", " C");
    return 0;
}