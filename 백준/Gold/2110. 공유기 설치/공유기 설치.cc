#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//1, 2, 4, 8, 9
//if mid == 4?, c <3 이므로 x
//if mid == 3? 1-4-8 OR 1-4-9

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,c;
    cin >> n >> c;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    //위치가 아니라, 거리자체를 이분탐색하는게 포인트
   int ans = 0, start = 1, end = v[n-1] - v[0]; 
   //end = 끝점 - 시작점

   while(start <= end){
    int mid = (start + end) / 2; //1,2,4,8,9일때 4가 중앙값이아닌 1+8/2 -> 4가 중앙값!
    int s = v[0]; //시작점위치
    int cnt = 1;
    for(int i = 1;i<n;i++){
        //현재집에서 다음집까지 거리가 mid보다 크다면?
        if(v[i] - s >= mid){
            cnt++;
            s = v[i]; //갱신
        }
    }

    //c개 이상은 사용해야함. 
    if(cnt >= c){
        ans = max(ans,mid);
        start = mid + 1;
    }else{
        end = mid - 1;
    }
   }

   cout << ans;
   return 0;
}
