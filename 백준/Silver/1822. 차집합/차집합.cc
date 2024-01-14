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
    int n,m,num;
    vector<int>a;
    vector<int>b;
    vector<int>ans;
    cin >> n >> m;

    for(int i = 0;i<n;i++) cin >> num, a.push_back(num);
    sort(a.begin(),a.end());
    for(int i = 0;i<m;i++) cin >> num, b.push_back(num);
    sort(b.begin(), b.end());
    int cnt = 0;
    for(int i = 0;i<n;i++) if(!check(a[i], b)) cnt += 1, ans.push_back(a[i]);
    if(!cnt){
        cout << "0";
    }else{
        cout << cnt << "\n";
        for(int i = 0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
    }

}