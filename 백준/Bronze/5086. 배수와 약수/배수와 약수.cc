#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n1,n2;

    while(true){
        cin >> n1 >> n2;
    if(n1 == 0 && n2 == 0){
            break;
        }
        else if(n1 % n2 == 0){
            cout << "multiple\n";
        }else if(n2 % n1 == 0){
            cout << "factor\n";
        }else{
            cout << "neither\n";
        }
    }
    
        return 0;
}