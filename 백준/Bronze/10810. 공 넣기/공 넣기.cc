#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    int arr[n+1] = {0,};
    for(int i = 0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;

        for(int j = a;j<=b;j++){
            arr[j] = c;
        }
    }

    for(int i = 1;i<=n;i++){
        cout << arr[i] << " ";
    }
        return 0;
}