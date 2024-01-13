#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000009;
long long dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 1000000; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}
