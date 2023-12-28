#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    int coin[21] = { 0, };
 
    while(T--) {
        int N;
        int M;
        cin >> N;
 
        for (int i = 1;i <= N; i++) {
            cin >> coin[i];
        }
        cin >> M;
 
        int dp[10001] = { 0 };
        dp[0] = 1; //핵심로직 1
 
        for (int i = 1;i <= N;i++) {
            for (int j = coin[i]; j<= M; j++) {
                dp[j] += dp[j - coin[i]];//핵심로직 2
            }
        }
        cout << dp[M] << "\n";
    }
        return 0;
}