#include<bits/stdc++.h>
using namespace std;

long INF = 1e9;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    long long dp[N+1][10];
    for(int i = 1;i<=9;i++){
        dp[1][i] = 1;
    }
    dp[1][0] = 0;

    for(int i = 2;i<=N;i++){
        for(int j = 0;j<=9;j++){
    if(j == 0) dp[i][0] = dp[i-1][1] % INF;
        else if(j == 9) dp[i][9] = dp[i-1][8] % INF;
        else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % INF;
        }
    }
 long long cnt = 0;
for(int i = 0; i <= 9; i++){
    cnt = (cnt + dp[N][i]) % INF;
}


   cout << cnt << "\n";

        return 0;
}
