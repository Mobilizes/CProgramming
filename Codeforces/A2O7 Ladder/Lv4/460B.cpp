#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)

ll sumofdigit(ll x){
    ll sum = 0;
    while(x>0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

ll power(ll x, ll a){
    ll res = 1;
    while(a--){
        res *= x;
    }
    return res;
}

int main()
{
    Mob;
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> answers;
    for(ll x=1; x<=81; x++){
        ll equation = b * power(x, a) + c;
        if(sumofdigit(equation) == x and equation < INTinf) answers.push_back(equation);
    }
    cout << answers.size() << endl;
    for(ll i : answers) cout << i << ' ';
    return 0;
}

// https://codeforces.com/problemset/problem/460/B