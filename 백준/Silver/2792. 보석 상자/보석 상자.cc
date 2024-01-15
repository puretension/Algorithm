#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,sum,ans = 1e18;
ll a[300001];

bool check(ll mid){
    sum = 0;
    for(int i = 0;i<m;i++){
        sum += a[i] / mid;
        if(a[i] % mid) sum++;
    }
    return n>=sum;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    ll low = 1, high = 0, mid;
    for(int i = 0;i<m;i++){
        cin >> a[i];
        high = max(high, a[i]);
    }

    while(low<=high){
        mid = (low + high) / 2;
        if(check(mid)){
            ans = min(ans, mid); //4개씩 나눠줄때 3대입, 3개씩 나눠줄때 5, 2개는 n<sum이므로 불만족
            high = mid - 1; 
        }else{
            low = mid + 1;
        }
    }

    cout << ans;

        return 0;
}