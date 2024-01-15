#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m;
vector<int> a;

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    cin >> m;
    sort(a.begin(), a.end());
    
    ll low = 0, high = a[n-1], mid, ans = 0;

    while(low <= high) {
        ll sum = 0;
        mid = (low + high) / 2;
        for(int i = 0; i < n; i++) {
            if(a[i] > mid) 
                sum += mid;
            else 
                sum += a[i];
        }

        if(sum > m) {
            high = mid - 1;
        } else {
            ans = max(ans, mid);
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
