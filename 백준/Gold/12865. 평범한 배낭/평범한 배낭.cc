#include<bits/stdc++.h>
using namespace std;

int dp[101][100001];
int w[101];
int v[101];

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin >> n >> k;

    for(int i = 1;i<=n;i++){
        cin >> w[i] >> v[i]; // i번째 무게-가치
        for(int j = 1;j<=k;j++){  //당연히 입력받은 새로운 무게보다 클때에만 갱신
        (j >= w[i]) ? dp[i][j] = max(dp[i-1][j], v[i] + dp[i-1][j-w[i]]) : dp[i][j] = dp[i-1][j]; 
        }
    }
    cout << dp[n][k];

        return 0;
}