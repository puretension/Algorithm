#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int max;
    double ans1,ans2,ans3,ans4;

    cin >> n;
    vector<double> a(n);

    for(int i = 0;i<n;i++){
        cin >> a[i];
        ans1 += a[i];
    }

    ans1 = round(ans1/n); //1
    if(ans1 == -0) ans1 = 0;

    sort(a.begin(), a.end());

    int mid = (n-1)/2;
    ans2 = a[mid]; //2
    
    int cntArr[8001] = {0,};

     for(int i = 0;i<n;i++)
       (a[i] >= 0) ? cntArr[int(a[i])]++ : cntArr[int(fabs(a[i]))+4000]++;

    max = 0;

    for(int i = 0;i<8001;i++){
        if(max < cntArr[i]){
            max = cntArr[i];
        }
    }

      vector<double> ans3Arr;

     for(int i = 0;i<8001;i++){
        if(max == cntArr[i]){
            (i<=4000) ? ans3Arr.push_back(i): ans3Arr.push_back((i-4000) * (-1));
        }
     }

     sort(ans3Arr.begin(),ans3Arr.end());

     (ans3Arr.size() == 1) ? ans3 = ans3Arr[0] : ans3 = ans3Arr[1]; // 3

     ans4 = a[n - 1] - a[0]; //4

    cout << ans1 << "\n";
    cout << ans2 << "\n";
    cout << ans3 << "\n";
    cout << ans4 << "\n";
    
        return 0;
}
