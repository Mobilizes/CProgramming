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


int main()
{
    Mob;
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            s.erase(i, 1);
            break;
        }
        if(i==s.length()-1) s.erase(i, 1);
    } 
    cout << s << endl;
    return 0;
}

// codeforces.com/problemset/problem/258/A