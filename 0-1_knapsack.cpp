/*
BISMILLAH
Author :: MD SH EMON
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 100;
const int M = 1e5 + 5;
int dp[N][M], wt[N], val[N];

int knapsack(int n, int cap) {
    if(n == 0) return 0;
    // if value is already calculated then return it.
    if(dp[n][cap] != -1) return dp[n][cap];
    if(cap < wt[n]){
        int ans = knapsack(n - 1, cap);
        dp[n][cap] = ans; return ans;
    }
    int ans1 = val[n] + knapsack(n - 1, cap - wt[n]);
    int ans2 = knapsack(n - 1, cap - wt[n]);
    int ans = max(ans1, ans2);
    dp[n][cap] = ans; return ans;
}

int32_t main() {
    int n, cap; cin >> n >> cap;
    for(int k = 1; k <= n; k++) cin >> wt[k] >> val[k];
    for(int k = 0; k <= n; k++){
        for(int l = 0; l <= cap; l++) dp[k][l] = -1;
    }
    cout << knapsack(n, cap) << "\n";
    return 0;
}