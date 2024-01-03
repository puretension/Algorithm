const int MOD = 15746;

#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int dp[1000001];

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3;i<=n;i++){
        dp[i] = dp[i-1] % MOD + dp[i-2] % MOD;
    }

    cout << dp[n] % MOD << "\n";

    

    
        return 0;
}