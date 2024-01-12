#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n); 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 

    int minDiff = INT_MAX;
    int j = 0;

    for(int i = 0; i < n; ++i){
        while(j < n && arr[j] - arr[i] < m){
            j++;
        }
        if(j < n){
            minDiff = min(minDiff, arr[j] - arr[i]);
        }
    }

    cout << (minDiff == INT_MAX ? 0 : minDiff) << "\n";
    
    return 0;
}
