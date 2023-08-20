#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

void max_characteristic(int k, int n) {
    a[0] = 1;
    a[k-1] = n;
    double interval = (double)(n - 1) / (k - 1);
    for (int i = 1; i < k-1; i++) {
        a[i] = (int)(a[i-1] + interval);
    }
}

int main()
{
    Mob;
    int t; cin >> t;
    while(t--){
        int k, n; cin >> k >> n;
        max_characteristic(k, n);
    }
    return 0;
}
