#include <bits/stdc++.h>
using namespace std;

int halves(int m, int n) {
    int d = (m + n)/2;
    if(m == n) return m * m;
    return halves(m, d) + halves(d + 1, n);
}

int main() {
    int m, n; cin >> m >> n;
    int sum = halves(m, n);
    cout << sum << "\n";
    return 0;
}