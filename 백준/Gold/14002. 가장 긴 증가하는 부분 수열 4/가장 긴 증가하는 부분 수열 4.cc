#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int arrIdx[1001];
int lenArr;

vector<int>LIS;
vector<int>result;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1;i<=n;i++) 
        cin >> arr[i];
    
    LIS.push_back(arr[1]); //1번째 수열 값

    for(int i = 2;i<=n;i++){
        if(LIS[lenArr] < arr[i]){ // LIS[0] == 10 < 20, LIS[1] == 20 < 10 X, LIS[1] == 20 < 30, 
        LIS.push_back(arr[i]); // 20 push, 30 push
        lenArr++; // 1, 2
        arrIdx[i] = lenArr; // 20까지 1, 30까지 2, 
        }else{
            int pos = lower_bound(LIS.begin(), LIS.end(), arr[i]) - LIS.begin(); // 0, 1
            LIS[pos] =arr[i]; //LIS[0] = 10, LIS[1] = 20,
            arrIdx[i] = pos; //arrIdx[3] = 0 //3번째 10의 초기화 지점, arrIdx[5] = 0 //5번째 20의 초기화 지점
        }
    }

    cout << lenArr + 1 << '\n';
    for(int i=n; i>=1 && lenArr>=0; i--){
        if (arrIdx[i] == lenArr) {
            result.push_back(arr[i]);
            lenArr--;
        }
    }

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << ' ';
  
        return 0;
}