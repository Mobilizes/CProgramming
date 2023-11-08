#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main(){
    Mob;
    tcs(){
        int n; cin >> n;
        string s; cin >> s;
        bool aW=false, bW=false;
        for(int y=1; y<=n; y++){
            bool flag = false;
            for(int x=1; x<=n; x++){
                int aS=0, bS=0;
                int a=0, b=0;
                for(int i=0; i<n; i++){
                    if(aS==y or bS==y){aS=0; bS=0; break;}
                    if(s[i]=='A') a++;
                    if(s[i]=='B') b++;
                    if(a==x){aS++; a=0; b=0;}
                    if(b==x){bS++; a=0; b=0;}
                }
                if(aS==y){
                    aW = true;
                    flag = true;
                    break;
                }
                if(bS==y){
                    bW = true;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(aW and !bW) cout << 'A' << el;
        else if(bW and !aW) cout << 'B' << el;
        else cout << '?' << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/