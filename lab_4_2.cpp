#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, answer = 1; cin >> n;
    for(int k = n; k >= 1; k--) answer *= k;
    cout << answer << "\n";

    return 0;
}