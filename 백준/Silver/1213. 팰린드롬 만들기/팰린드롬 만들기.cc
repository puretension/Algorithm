#include<bits/stdc++.h>
using namespace std;


char str[51];
int alpha[26] = {0,};

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  string s;
   cin >> s;
   int size = s.size();
   for(int i = 0;i<size;i++){
    alpha[s[i] - 'A']++;
   }

    int oddCount = 0;
    //핵심로직 - 홀수만 예외로 처리하자
     for(int i = 0;i<26;i++){
            //홀수야?(AB, ABBB 거르기위함)
          if(alpha[i] % 2 == 1){
             oddCount++;
             str[size/2] = i + 'A'; //홀수 알파벳cnt는 정중앙
            alpha[i]--; //배치해줬으니 빼준다
         }
      }

     //홀수 알파벳cnt는 정중앙에 들어올거 딱 1개만 있어야하므로
    if(oddCount > 1) {
		cout << "I'm Sorry Hansoo";
		return 0;
	} else {
		int l=0, r=size-1; //0번째랑 마지막번째로 채워준다
		for(int i=0; i<26; i++) {
			while(alpha[i] > 1) {
				str[l++] = i + 'A';
				str[r--] = i + 'A';
				alpha[i] -= 2;
			}
		}
		for(int i=0; i<s.size(); i++) {
			cout << str[i];
		}
	}

        return 0;
}