#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


map<string, bool> visited;
map<string, bool> memo;
string res;

int stringToInt(string s){
    int n = s.length();
    int res = 0;
    for(int i=n-1, j=1; i>=max(n-3, 0); i--, j*=10){
        res += (s[i]-'1'+1)*j;
    }
    return res;
}

bool dp(string s){
    int n = s.length();
    if(n==0) return false;
    if(visited[s]) return memo[s];
    visited[s] = true;
    if(stringToInt(s)%8==0){
        memo[s] = true;
        res = s;
    } else{
        for(int i=n-1; i>=max(n-3, 0); i--){
            string t = s; t.erase(i, 1);
            memo[s] = max(dp(t), memo[s]);
        }
    }
    return memo[s];
}

int main()
{
    Mob;
    string s; cin >> s;
    if(dp(s)){
        cout << "YES" << endl;
        if(res.length()>=2 and res[0]=='0') res.erase(0, 1);
        cout << res << endl;
    }
    else cout << "NO" << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/550/C