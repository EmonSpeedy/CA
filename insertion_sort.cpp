#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, step = 1; cin >> n;
    vector<int> a(n);
    for(int k = 0; k < n; k++) cin >> a[k];

    for(int k = 1; k < n; k++){
        int index = k;
        while(index >= 1){
            if(a[index] < a[index - 1]){
                swap(a[index], a[index - 1]);
                index--;
            }
            else break;
        }
        cout << "step - " << step << " -> ";
        for(auto i : a) cout << i << " ";
        cout << "\n";
        step++;
    }
    
    for(auto i : a) cout << i << " ";
    
    return 0;
}