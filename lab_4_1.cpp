#include <bits/stdc++.h>
using namespace std;

int find_factorial(int n) {
    if(n == 1) return 1;
    return n * find_factorial(n - 1);
}

int main() {
    int n; cin >> n;
    int fact = find_factorial(n);
    cout << fact << "\n";
    return 0;
}