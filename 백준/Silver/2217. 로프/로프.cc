#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n);
    for(int i = 0;i<n;i++)
        cin >> a[i];
   
    sort(a.begin(), a.end(), greater<>());

     // 2, 10 15
     // 6, 1 2 50 80 9000 9200

     for(int i = 0;i<n;i++){
        int sum = 0;
        int cnt = 1;
        for(int j = 0;j<=i;j++){
            sum += a[i]; //비교값 누적.시간복잡도 고려하자..(OlogN)
        }
        if(ans <= sum) ans = sum;
     }
    cout << ans;
    return 0;
}