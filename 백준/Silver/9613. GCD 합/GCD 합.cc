//모든 수에 최대공약수 1은 디폴트(소수간의 비교라도)
//입력받은거 인자로 2중포문으로 gcd 구하고 sum으로 누적 -> ans
// sum이 누적되지않게 배열 원소로 각각 출력
#include <bits/stdc++.h>
using namespace std; 

long long n_arr[101] = { 0 };
 long long sum[101] = { 0 };

int gcd(int x, int y)
{
    if (x % y == 0) return y;
    else return gcd(y, x % y);
}
 
int main()
{
    int t, n;
 
    cin >> t;
 
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> n_arr[j];
        }
        for (int k = 0; k < n; k++)
        {
            for (int p = k + 1; p < n; p++)
            {
                sum[i] += gcd(n_arr[k], n_arr[p]);
            }
        }
    }
 
    for (int i = 0; i < t; i++)
        cout << sum[i]<<"\n";
}
