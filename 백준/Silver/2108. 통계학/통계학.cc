#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;		
	double element;
	vector <double> v;
	double ans1 = 0;
	double ans2 = 0;
	double ans3 = 0;
	double ans4 = 0;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}

	for (int i = 0; i < n; i++) {
		ans1 += v[i];
	}
	ans1 = round(ans1 / n);
    
	if (ans1 == -0) {
		ans1 = 0;
	}


	sort(v.begin(), v.end());
	if (n == 1) {
		ans2 = v[0];
	}
	else {
		ans2 = v[(n - 1) / 2];
	}

	
	int count[8001] = { 0, };
	for (int i = 0; i < n; i++) {
		if (v[i] >= 0) {
			count[int(v[i])]++;
		}
		else {
			count[int(fabs(v[i])) + 4000]++;
		}
	}

	int max = count[0];
	int index = 0;
	for (int i = 0; i < 8001; i++) {
		if (max < count[i]) {
			index = i;
			max = count[i];
		}
	}

	vector <double> mv;
	for (int i = 0; i < 8001; i++) {
		if (max == count[i]) {
			if (i <= 4000) {
				mv.push_back(i);
			}
			else {
				mv.push_back((i - 4000) * (-1));
			}
		}
	}

	// 정렬 필요. 두번째로 작은 최빈값 출력(핵심 로직)
	sort(mv.begin(), mv.end());
	// 최빈값이 하나인 경우 
	if (mv.size() == 1) {
		ans3 = mv[0];
	}
	else {
		ans3 = mv[1];
	}


	ans4 = v[n - 1] - v[0];

	cout << ans1 << "\n";
	cout << ans2 << "\n";
	cout << ans3 << "\n";
	cout << ans4 << "\n";

	return 0;
}