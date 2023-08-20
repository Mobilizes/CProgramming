#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int n, m;
vector<pair<string, ll>> arr;

bool comparator(pair<string, ll> a, pair<string, ll> b){
    for(int i=0; i<a.fi.length(); i++){
        if(((i+1)%2==0)){
            if(a.fi[i] > b.fi[i]) return true;
            else if(a.fi[i] < b.fi[i]) return false;
        } else{
            if(a.fi[i] < b.fi[i]) return true;
            else if(a.fi[i] > b.fi[i])return false;
        }
    }
    return a.se < b.se;
}

int main()
{
    Mob;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        string c; cin >> c;
        arr.push_back(make_pair(c, i));

    }
    sort(arr.begin(), arr.end(), comparator);
    for(int i=0; i<n; i++) cout << arr[i].se << ' ';
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/