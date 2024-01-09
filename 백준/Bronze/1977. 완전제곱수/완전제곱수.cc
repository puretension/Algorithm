#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,cnt = 0, sum = 0;
	int arr[10001];
	cin >> n >> m;
	for(int i = n; i<=m;i++){
		if(sqrt(i) == (int)sqrt(i)){
			arr[cnt] = i;
			sum += i;
			cnt++;
		}
	}

	if(cnt == 0){
		cout << -1;
		return 0;
	}
	cout << sum << "\n" << arr[0];
    
        return 0;
}