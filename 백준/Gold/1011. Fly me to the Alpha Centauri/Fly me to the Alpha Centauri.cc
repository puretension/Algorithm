#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int x,y,l,d,cnt = 0;
        cin >> x >> y;
        l = y - x;
        d = sqrt(l);
        if(pow(d,2) == l){
            cnt = (2 * d) - 1;
        }else{
            cnt = 2*d;
        }
        if(l > d*(d+1)) cnt += 1;
        cout << cnt << "\n";
    }
    
        return 0;
}