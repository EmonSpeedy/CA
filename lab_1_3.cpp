#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a % 2 != 0)  sum += a;
    }
    cout << sum << "\n";

    return 0;
}