#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll N, K, M;
int main() {
    cin >> N >> K >> M;

    int result = 1;

    while (N || K) {
        int A = 1, B = 1;
        int n = N % M, k = K % M;

        for (int i = n; i > n - k; i--)
            A = A * i % M;

        for (int i = k; i >= 2; i--)
            B = B * i % M;

        int invB = 1, exp = M - 2;
        while (exp) {
            if (exp & 1) invB = invB * B % M;
            exp >>= 1;
            B = B * B % M;
        }

        result = result * (A * invB % M) % M;
        N /= M, K /= M;
    }

    cout << result;
    return 0;
}