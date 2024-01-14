#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, maxNum;
ll s[2001], d[2001];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i];
     fill(d, d + n, 1);  // d 배열을 1로 초기화
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(s[j] > s[i]) d[i] = max(d[i], d[j] + 1);
        }
    }
    for(int i = 0; i < n; i++) maxNum = max(maxNum, d[i]);
    cout << n - maxNum;
}  