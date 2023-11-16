#include <bits/stdc++.h>
using namespace std;

int calculate_sum(int n) {
    if(n == 1) return n;
    return n + calculate_sum(n-1);
}

int main() {
    int n; cin >> n;
    int sum = calculate_sum(n);
    cout << sum << "\n";
    return 0;
}