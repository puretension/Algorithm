#include<bits/stdc++.h>
using namespace std;

int num; // 입력받을 요소의 개수
int inputArray[1000001]; // 입력받은 요소를 저장할 배열
int posInSeq[1000001]; // 각 요소가 LIS에서 위치하는 인덱스를 저장할 배열
int lenLIS; // LIS의 길이를 저장할 변수
vector<int> LIS; // LIS를 저장할 벡터
vector<int> result; // 결과를 출력하기 위한 벡터

int main(){
    cin >> num;
    for (int i = 1; i <= num; i++) cin >> inputArray[i];

    LIS.push_back(inputArray[1]);
    for (int i = 2; i <= num; i++) {
        if (LIS[lenLIS] < inputArray[i]) {
            LIS.push_back(inputArray[i]);
            lenLIS++;
            posInSeq[i] = lenLIS;
        }
        else {
            int pos = lower_bound(LIS.begin(), LIS.end(), inputArray[i]) - LIS.begin();
            LIS[pos] = inputArray[i];
            posInSeq[i] = pos;
        }
    }

    cout << lenLIS + 1 << '\n';
    for(int i=num; i>=1 && lenLIS >=0; i--){
        if (posInSeq[i] == lenLIS) {
            result.push_back(inputArray[i]);
            lenLIS--;
        }
    }

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << ' ';
}