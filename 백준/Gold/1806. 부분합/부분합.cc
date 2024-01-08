#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s;
    cin >> n >> s;

    vector<int> arr(n); 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0, end = 0, m = INT_MAX; 
    for(int start = 0; start < n; start++){
        while(sum < s && end < n){
            sum += arr[end];
            end++;
        }

        if(sum >= s){
            m = min(m, end - start); 
        }
        sum -= arr[start];
    }

    if(m == INT_MAX) m = 0; 
    cout << m << "\n";
    
    return 0;
}
