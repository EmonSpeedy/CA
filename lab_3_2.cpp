#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p1 = 0, p2 = 1;
    cout << p1 << " " << p2 << " ";
    for(int i = 3; i <= n; i++){
        int p3 = p1 + p2;
        cout << p3 << " ";
        p1 = p2; p2 = p3; 
    }
    return 0;
}