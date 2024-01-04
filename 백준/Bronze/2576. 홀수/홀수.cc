#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    int a[7];

    int ans1 = 0,ans2 = -1,minNum = 100;
    for(int i = 0;i<7;i++){
        cin >> a[i];
        if(a[i] % 2){
            ans1 += a[i];
            if(a[i] < minNum){
                minNum = a[i];
            }
        }
    }

    if(!ans1){
        cout << ans2;
    }else{
        cout << ans1 << "\n" << minNum;
    }
        return 0;
}