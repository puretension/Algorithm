#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int t,n,m,temp;

int check(int target, vector<int> &v){
    int l = 0, r = v.size()-1;
    int mid;
    while(l<=r){
        mid = (l + r) / 2;
        if(v[mid] > target) r = mid - 1;
        else if(v[mid] == target) return 1;
        else l = mid + 1;
    }
    return 0;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n;

    int v[1001];
    vector<int>sum;

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    for(int i = 0;i<n;i++)
        for(int j = i;j<n;j++)
            sum.push_back(v[i] + v[j]); // 누적을 통한 3수의 합

    sort(v, v+n);
    sort(sum.begin(),sum.end());

    for(int i = n-1;i>=0;i--){
        for(int j = i;j>=0;j--){
            int maxNum = v[i] - v[j];
            bool ans = check(maxNum, sum); //x,y,z,k있다고할때, x+y = k-z 성립하면 됨. 단 k가 최대값!!! 
            if(ans) {
                cout << v[i];
                 return 0;
            }
        }
    }
        return 0;
}