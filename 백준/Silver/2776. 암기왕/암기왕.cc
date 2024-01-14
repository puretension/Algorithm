#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> note1(N);
        for(int i = 0; i < N; i++) {
            cin >> note1[i];
        }
        sort(note1.begin(), note1.end());
        
        int M;
        cin >> M;
        int num;
        //bst
        for(int i = 0; i < M; i++) {
            cin >> num;
            int left = 0, right = note1.size() - 1;
            int result = -1;
            while(left <= right) {
                int mid = (left + right) / 2;
                
                if(note1[mid] > num) {
                    right = mid - 1;
                } else {
                    result = mid;
                    left = mid + 1;
                }
            }
            
            if(result != -1 && note1[result] == num) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
