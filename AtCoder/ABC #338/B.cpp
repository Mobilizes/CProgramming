#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"


int main(int argc, char const* argv[]){
    Mob;
    string s; cin >> s;
    int mp[27]; init(mp,27,0);
    for(int i=0; i<s.length(); i++) mp[s[i]-'a']++;
    int mx = 0;
    for(int i=0; i<27; i++) mx = max(mp[i], mx);
    for(int i=0; i<27; i++){
        if(mp[i]==mx){
            cout << char(i+'a') << el;
            break;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/