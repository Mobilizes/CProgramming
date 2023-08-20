#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

int main()
{
    Mob;
    ll n; cin >> n;
    vector<ll> vec(n);
    queue<ll> w1;
    queue<ll> w2;
    ll pos = 0; ll neg = 0;
    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i]>0) {
            w1.push(vec[i]); pos += vec[i];
        }
        else {
            w2.push(-vec[i]); neg -= vec[i];
        }
    }
    if(pos>neg) cout << "first" << el;
    else if(neg>pos) cout << "second" << el;
    else{
        while(!w1.empty() and !w2.empty()){
            if(w1.front()>w2.front()){
                cout << "first" << el;
                return 0;
            }
            if(w1.front()<w2.front()){
                cout << "second" << el;
                return 0;
            }
            w1.pop();
            w2.pop();
        }
        if(!w1.empty() and w2.empty()) cout << "first" << el;
        else if(w1.empty() and !w2.empty()) cout << "second" << el;
        else cout << (vec[n-1]>0? "first" : "second") << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/