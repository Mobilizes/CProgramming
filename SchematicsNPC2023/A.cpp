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


map<char, int> mp;

void init(){
    for(int i=1; i<=4; i++) mp['5'+i] = i;
    mp['T'] = 5;
    mp['J'] = 6;
    mp['Q'] = 7;
    mp['K'] = 8;
    mp['A'] = 9;
}

bool compare(string a, string b){
    return mp[a[0]] > mp[b[0]];
}

int main()
{
    Mob;
    init();
    tcs(){
        int n, m; cin >> n >> m;
        char c; cin >> c;
        vector<string> P(n+5);
        for(int i=0; i<n; i++) cin >> P[i];
        vector<string> E(m+5);
        for(int i=0; i<m; i++) cin >> E[i];
        sort(P.begin(), P.end(), compare);
        sort(E.begin(), E.end(), compare);
        // check for the card fight results without special rule
        for(int i=0; i<m; i++)
            for(int j=n-1; j>=0; j--){
                if(P[j]=="") continue;
                if(P[j][1]==E[i][1] and mp[E[i][0]]<mp[P[j][0]]){
                    P[j] = "";
                    E[i] = "";
                    break;
                }
            }
        // taking factor in the special rule
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(P[j]=="") continue;
                if(P[j][1]!=c) continue;
                if((mp[E[i][0]]<mp[P[j][0]]) or (E[i][1]!=c)){
                    P[j] = "";
                    E[i] = "";
                    break; 
                }
            }
        // check if its possible
        bool flag = true;
        for(int i=0; i<m; i++){
            if(E[i]!="") flag = false;
        }
        if(flag) cout << "YA" << el;
        else cout << "TIDAK" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/