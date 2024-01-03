#include<bits/stdc++.h>
using namespace std;

int a[10001], d[10001];

int main(){ 
    int n,k;
    cin >> n >> k;

    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    fill(d, d+10001, 100001);
    d[0] = 0;

    sort(a,a + n);

    for(int i = 0; i<n;i++){
        for(int j = a[i]; j<=k; j++){
            d[j] = min(d[j], d[j - a[i]] + 1);
        }
    }

    if(d[k] == 100001){
        cout << -1 << "\n";
    }else{
        cout << d[k] << "\n";
    }
    return 0;
}