#include<bits/stdc++.h>
using namespace std;

int a[10001] = {0,};
int d[10001] = {0,};

int main(){ 
    int n,k;
    cin >> n >> k;

    for(int i = 1;i<=n;i++) 
        cin >> a[i];


d[0] = 1;

for(int i = 1;i<=n;i++){
    for(int j = a[i]; j<=k;j++){
        d[j] = d[j] + d[j-a[i]];
    }
}

cout << d[k] << "\n";

    return 0;
}