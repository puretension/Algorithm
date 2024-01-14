#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,v1[2000],v2[2000],f[2000], ans;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   cin >> n;

    for(int i = 0; i < n; i++) cin >> v1[i];

    for(int i = n-1; i >= 0; i--) {
        for(int j = i+1; j < n; j++) {
            if(v1[i] < v1[j]) v2[i] = max(v2[j], v2[i]);
            else f[i] = max(f[j], f[i]);
            }
        v2[i]++;
        f[i]++;
    ans = max(ans, v2[i] + f[i] - 1);
}
cout << ans;

    
    return 0;
}