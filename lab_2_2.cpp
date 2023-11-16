#include <bits/stdc++.h>
using namespace std;

int going_up(int m, int n) {
    if(m == n) return m * m;
    return (m * m) + going_up((m + 1), n);
}

int main() {
    int m, n; cin >> m >> n;
    int sum = going_up(m, n);
    cout << sum << "\n";
    return 0;
}