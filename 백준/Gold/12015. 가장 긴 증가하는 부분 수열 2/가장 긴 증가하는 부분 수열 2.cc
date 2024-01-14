
    #include<bits/stdc++.h>
    using namespace std;
    int n, ret;

    int main(){ 
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        cin >> n;

        vector<int>a(n);
        vector<int>lis;

        for(int i = 0;i<n;i++)
            cin >> a[i];

        for(int i = 0;i<n;i++){
            //전기줄이랑 똑같다..
            auto it = lower_bound(lis.begin(), lis.end(), a[i]);
             if(it == lis.end()) lis.push_back(a[i]);
             else *it = a[i];
        }

        cout << lis.size();

            return 0;
    }