#include<bits/stdc++.h>
using namespace std;

int l[1000001] = {0,};
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans= 0;
    cin >> n;

    for(int i = 0;i<n;i++){
        int num;
        cin >> num;
        l[num] = l[num-1] + 1;
        ans = max(ans, l[num]);
    }

    cout << n - ans << "\n"; 

    return 0;
}