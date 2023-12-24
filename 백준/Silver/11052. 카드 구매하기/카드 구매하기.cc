#include<bits/stdc++.h>
using namespace std;

int c[1001] = {0,};
int d[1001] = {0,};

int main(){ 
    int n;
    cin >> n;

    for(int i = 1;i<=n;i++){
        cin >> c[i];
        d[i] = c[i]/i; //평균값
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1; i+j<=n; j++){
            if(c[i] + c[j] > c[i+j]){ //기존거 보다 크다면?
                c[i+j] = c[i] + c[j]; //체인지
                d[i+j] = d[i+j]/(i+j); //평균값도 체인지
            }
        }
        if(c[n] < d[n] * n)
            c[n] = d[n] * n;
    }

    cout << c[n];

    return 0;
}