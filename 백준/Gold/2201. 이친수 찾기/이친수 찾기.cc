#include<bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 100;


long long k;
long long dp[MAX_LENGTH + 1][2];
long long sum[MAX_LENGTH + 1];


int main(){
    scanf("%lld", &k);
    
    dp[1][1] = 1; sum[1] = 1;
    
    for (int i = 2; i <= MAX_LENGTH; i++){
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];   //dp[i][0]: 길이가 n이고, 마지막숫자가 0
        dp[i][1] = dp[i - 1][0];        //dp[i][1]: 길이가 n이고, 마지막숫자가 1
        sum[i] = dp[i][0] + dp[i][1] + sum[i - 1]; // 길이가 n인 이친수 중에서 가장 큰 수가 전체 이친수에서 몇번째인가?
    }
    
    if (k == 1){
        printf("1\n");
    }
    else {
        printf("1");
        int n = 0;
        for (int i = 2; i <= MAX_LENGTH; i++){
            if (k <= sum[i]) {
                n = i; break;
            }
        }
        k -= (sum[n - 1] + 1);
        n -= 1;
        while (n > 0) {
            if (k > sum[n - 1]){
                printf("1");
                k -= (sum[n - 1] + 1);
            }
            else {
                printf("0");
            }
            n -= 1;
        }
        printf("\n");
    }
    
    return 0;
}