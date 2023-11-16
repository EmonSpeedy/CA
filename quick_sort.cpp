#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &a) {
    if(a.size() <= 1) return a;

    int pivot = a.size() - 1;
    vector<int> b, c;
    for(int k = 0; k < a.size(); k++){
        if(k == pivot) continue;
        if(a[k] <= a[pivot]) b.push_back(a[k]);
        else c.push_back(a[k]);
    }
    vector<int> sorted_b, sorted_c;
    sorted_b = quick_sort(b); sorted_c = quick_sort(c);
    vector<int> sorted_a;
    for(int k = 0; k < sorted_b.size(); k++) sorted_a.push_back(sorted_b[k]);
    sorted_a.push_back(a[pivot]);
    for(int k = 0; k < sorted_c.size(); k++) sorted_a.push_back(sorted_c[k]);

    return sorted_a;
}

int main() {
    int n; cin >> n;
    vector<int> ara(n);
    for(int k = 0; k < n; k++) cin >> ara[k];
    vector<int> ans = quick_sort(ara);
    for(int k = 0; k < n; k++) cout << ans[k] << " ";
    cout << "\n";

    return 0;
}