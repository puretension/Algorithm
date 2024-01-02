#include<bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,m,s,d;

    cin >> t >> m >> s;
    cin >> d;

    int t1 = 0,m1 = 0, s1 = 0;

    t1 = d / 3600;
    d %= 3600;
    m1 = d / 60;
    d %= 60;
    s1 += d;

    t += t1;
    m += m1;
    s += s1;

    if(s>=60){
        m+= 1;
        s-=60;
    }

    if(m>=60){
        t+= 1;
        m-=60;
    }

    if(t>=24){
        t %= 24;
    }

    cout << t << " " << m << " " << s << " " << "\n";

     return 0;
}