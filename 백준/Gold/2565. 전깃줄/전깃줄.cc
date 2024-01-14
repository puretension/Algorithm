#include<bits/stdc++.h>
using namespace std;

// 1-8 -> 2-2, 4-1, 6-4, 7-6, 9-7
// 2-2 -> 1-8, 4-1
// 3-9 -> 4-1, 6-4, 7-6, 9-7

// 4-1 -> 1-8, 2-2, 3-9
// 6-4 -> 1-8, 3-9
// 7-6 -> 1-8, 3-9
// 9-7 -> 1-8, 3-9
// 10-10
//A: 1,2,3,4,6,7,9,10
//1,2,4,6,7,8,9,10
//B전봇대에 연결된 전깃줄 위치가 증가하는 순서로 LIS
int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    vector<int> lis;
    for (int i = 0; i < n; ++i) {
        int key = v[i].second;
        //lower_bound? 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
        auto it = lower_bound(lis.begin(), lis.end(), key);
        if (it == lis.end()) //만약 key가 lis 내의 모든 요소보다 크다면(증가수열이면) 추가!
            lis.push_back(key);
        else
            *it = key; //[2,4,6]일때 5삽입한다? [2,4,5]로 교체하여 후속요소가 더 쉽게삽입, 증가수열 
    }

    cout << n - lis.size() << endl;

    return 0;
}