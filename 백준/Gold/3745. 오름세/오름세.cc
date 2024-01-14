#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    while(cin >>n){

    vector<ll> a(n);
    vector<ll> lis;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++) {
        auto it = lower_bound(lis.begin(), lis.end(), a[i]);
        if(it == lis.end()) lis.push_back(a[i]);
        else *it = a[i];
    }

    //빼주지말고 LIS길이 자체가 답임
    cout << lis.size() << "\n";
    }
    return 0;
}