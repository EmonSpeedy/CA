#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> &a) {
    if(a.size() <= 1) return a;
    vector<int> b, c;
    int mid = a.size()/2;
    for(int k = 0; k < mid; k++) b.push_back(a[k]);
    for(int k = mid; k < a.size(); k++) c.push_back(a[k]);
    vector<int> sorted_b, sorted_c, sorted_a;
    sorted_b = merge_sort(b); sorted_c = merge_sort(c);
    int idx1 = 0, idx2 = 0;
    for(int i = 0; i < a.size(); i++) {
        if(idx1 == sorted_b.size()){
            sorted_a.push_back(sorted_c[idx2]); idx2++;
        }
        else if(idx2 == sorted_c.size()){
            sorted_a.push_back(sorted_b[idx1]); idx1++;
        }
        else if(sorted_b[idx1] > sorted_c[idx2]){
            sorted_a.push_back(sorted_c[idx2]); idx2++;
        }
        else{
            sorted_a.push_back(sorted_b[idx1]); idx1++;
        }
    }
    return sorted_a;
}

int main() {
    int n; cin >> n;
    vector<int> ara(n);
    for(int k = 0; k < n; k++) cin >> ara[k];
    vector<int> ans = merge_sort(ara);
    for(int k = 0; k < n; k++) cout << ans[k] << " ";
    cout << "\n";

    return 0;
}