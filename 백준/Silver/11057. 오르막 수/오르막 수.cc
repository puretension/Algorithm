#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n+1][10];

    for(int i = 0;i<10;i++){
        arr[1][i] = 1;
    }

    for(int i = 2;i<=n;i++){
        for(int j = 0;j<10;j++){
            if(j == 0){
                arr[i][j] = 1;
                continue;
            }
            arr[i][j] = (arr[i-1][j] + arr[i][j-1]) % 10007;
        }
    }    
    
    int ans = 0;
    for(int i = 0;i<10;i++){
        ans += arr[n][i];
    }

    ans %= 10007;

    cout << ans << "\n";

        return 0;
}
