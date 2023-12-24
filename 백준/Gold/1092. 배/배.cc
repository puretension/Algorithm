#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n, m;
    //크래인
    cin >> n;
    vector<int> cranes(n);
    for(int i = 0; i < n; i++)
        cin >> cranes[i];
    sort(cranes.begin(), cranes.end(), greater<>());

    //박스
    cin >> m;
    vector<int> boxes(m);
    for(int i = 0; i < m; i++){
        cin >> boxes[i];
    }
    sort(boxes.begin(), boxes.end(), greater<>());

    //-1
    if(cranes[0] < boxes[0]){
        cout << -1 << "\n";
        return 0;
    }

    int ans = 0;

    while(!boxes.empty()){
        for(int i = 0; i < cranes.size(); i++){ 
            for(int j = 0; j < boxes.size(); j++){ 
                if(cranes[i] >= boxes[j]){ 
                    boxes.erase(boxes.begin() + j);
                    break;
                }
            }
        }
        ans++;
    }

    cout << ans << "\n";
    return 0;
}
