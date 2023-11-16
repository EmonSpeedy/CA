#include <bits/stdc++.h>
using namespace std;

int calculate_sum(int n) {
    int res = 0;
    for(int i = 1; i <= n; i += 2) res += (i * i);
    return res;
}

int main() {
    int n; cin >> n;
    int sum = calculate_sum(n);
    cout << sum << "\n";
    return 0;
}