#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    //시간복잡도 O(N), 앞에서부터 최대값까지 비교하면 무조건 초과.
    //max 값을 뒤에서부터 찾아내면, 값이 커지는 시점에 new max가 갱신되고, 값이 작아질때에는 max - a[i]로 누적시키면 된다.
    
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        long long max = 0;
        long long ans = 0;
        for(int i = n-1;i>=0;i--){
            if(max < a[i]) max = a[i];
            else ans += max - a[i]; 
        }
        cout << ans << "\n";
        }

        return 0;
}
