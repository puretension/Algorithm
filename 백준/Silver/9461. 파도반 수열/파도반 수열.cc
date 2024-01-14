#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n;
ll dp[100] = {1,1,1,2,2};

int main(){
    cin >> t;

    for(int i=5;i<100;i++)
        dp[i] = dp[i-1] + dp[i-5];

    while(t--){
        cin >> n;
        cout << dp[n-1] << "\n";
    }

    return 0;
}
