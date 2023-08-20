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


vector<int> fact(9, 1);

int main()
{
    Mob;
    for(int i=1; i<=8; i++) fact[i] = fact[i-1] * i;
    string s; cin >> s;
    sort(s.begin(), s.end());

    int n = s.length();
    int sum = fact[n];
    map<char, int> mp;
    for(int i=0; i<n; i++) mp[s[i]]++;
    for(char i='a'; i<='z'; i++) if(mp[i]>0) sum /= fact[mp[i]];
    cout << sum << el;
    do{
        cout << s << el;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/