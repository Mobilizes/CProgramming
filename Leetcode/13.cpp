#include <bits/stdc++.h>
 
using namespace std;
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

map<char, int> mp;

void defineromanvalues(){
    mp.insert(pair<char, int>('I', 1));
    mp.insert(pair<char, int>('V', 5));
    mp.insert(pair<char, int>('X', 10));
    mp.insert(pair<char, int>('L', 50));
    mp.insert(pair<char, int>('C', 100));
    mp.insert(pair<char, int>('D', 500));
    mp.insert(pair<char, int>('M', 1000));
}

void solve(string s){
    int n = s.length();
    int res = 0;
    for(int i=0; i<n; i++){
        if(mp[s[i]]<mp[s[i+1]]) res -= mp[s[i]];
        else res += mp[s[i]];
    }
    cout << res << endl;
}

int main()
{
    Mob;
    string s; cin >> s;
    defineromanvalues();
    solve(s);
    return 0;
}