#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//3 -> 길이 1
//1 -> 길이 1
//2 -> 길이1
//1,2 -> 길이 2
//3,1,2 -> 길이 3
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    //while(cin >>n){

    int T;
    cin >> T;
    for(int x = 1;x<=T;x++)
    {
 
    cin >> n;

    vector<ll> a(n);
    vector<ll> lis;

    for(int k = 0; k < n; k++)
        cin >> a[k];

    int totalLength = 0;
     for(int i = 0; i < n; i++) {
            lis.clear();
            for(int j = i; j < n; j++) {
                auto it = lower_bound(lis.begin(), lis.end(), a[j]);
                if(it == lis.end()) {
                    lis.push_back(a[j]);
                } else {
                    *it = a[j];
                }
                totalLength += lis.size();
            }
        }

        cout << "Case #" << x << ": " << totalLength << "\n";
    }
    return 0;
}
