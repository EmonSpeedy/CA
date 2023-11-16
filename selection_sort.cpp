#include <bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> &a) {
    for(int k = 0; k < a.size() - 1; k++){
        int min = k;
        for(int l = k + 1; l < a.size(); l++){
            if(a[l] < a[min]) min = l;
        }
        if(k != min) swap(a[min], a[k]);
    }
    return a;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int k = 0; k < n; k++) cin >> a[k];
    vector<int> ans = selection_sort(a);
    for(int k : ans) cout << k << " ";
    cout << "\n";

    return 0;
}