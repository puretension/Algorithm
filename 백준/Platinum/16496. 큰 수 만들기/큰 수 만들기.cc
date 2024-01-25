#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str[1001];

    cin >> n;
    bool flag = false;
    for(int i = 0;i<n;i++){
        cin >> str[i];
        if(str[i] != "0") flag = true; 
    }

    if(!flag){
        cout << "0";
        return 0;
    }
    
    sort(str, str + n, [](string a, string b){
        return a + b > b + a; //글자 a-b순서, b-a순서로 붙여보고 더 큰값으로 정렬. 그냥 개꿀문제
    });
    for(int i = 0;i<n;i++) cout <<str[i];

    return 0;
}