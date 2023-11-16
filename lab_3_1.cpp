#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    return fib(n - 1) + fib(n - 2);
}

void print_fibonacci(int n) {
    for(int i = 1; i <= n; i++){
        cout << fib(i) << " ";
    }
    cout << "\n";
}

int main() {
    int n; cin >> n;
    print_fibonacci(n);
    return 0;
}