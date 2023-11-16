#include <bits/stdc++.h>
using namespace std;

int going_down(int m, int n) {
    if(n == m) return n * n;
    return ((n * n) + going_down(m, n - 1));
}

int main() {
    int m, n; cin >> m >> n;
    int sum = going_down(m, n);
    cout << sum << "\n";
    return 0;
}