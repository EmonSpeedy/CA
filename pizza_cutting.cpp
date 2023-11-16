#include <bits/stdc++.h>
using namespace std;

int pizza_cut(int n) {
    if(n == 1) return 2;
    return pizza_cut(n - 1) + n;
}

int main() {
    int n; cin >> n;
    int slice = pizza_cut(n);
    cout << slice << "\n";

    return 0;
}