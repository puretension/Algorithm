 typedef unsigned long long int ll;


#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    
    // if(n==1){
    //     cout << "SK";
    // }else if(n == 2){
    //     cout << "CY";
    // }else if(n == 3){
    //     cout << "SK";
    // }else if(n == 4){
    //     cout << "SK";
    // }else if(n == 5){
    //     cout << "SK";
    // }else{
    //     if(n%2 == 1){
    //    cout << "CY";
    //     }else{
    //         cout << "SK";
    //     }
    // }

    if(n%7 == 0 || n % 7 == 2){
      cout << "CY" << "\n";
    }else{
              cout << "SK";
    }
    
        return 0;
}