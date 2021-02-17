#include<bits/stdc++.h>
using namespace std;

long long  dp[4020][4020];
long long  pref[4020];

long long  compute(long long  idx, long long  used, long long  n, long long  k, vector<long long > &arr) {
    if (used >= k and (pref[idx] - used >= k)) return 0;
    else if (idx >= n)  return 1e10;
    else if (dp[idx][used] != -1) return dp[idx][used];
    long long  c1 = compute(idx + 1, min(used + arr[idx], pref[idx] - used), n, k, arr);
    long long  c2 = compute(idx + 1, min(pref[idx] - used + arr[idx], used), n, k, arr);

    return dp[idx][used] = 1 + min(c1, c2);
}

long long  g(vector<long long > &arr, long long  n, long long  k) {
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);
    for (int i = 0; i <= n + 10; i++) {
        pref[i] = 0;
        for (int j = 0; j <= k + 10; j++)
            dp[i][j] = -1;
    }
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + arr[i - 1];
    long long  ans = compute(0, 0, n, k, arr);
    return ans > 1e9 ? -1 : ans;
}

void solve() {
    long long  n, k; cin >> n >> k;
    vector<long long > arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (n == 1) {
        cout << "-1" << endl;
        return;
    }
    cout << g(arr, n, k) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {  solve();}
    return 0;

}