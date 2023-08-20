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


void swapChar(char& c){
    if(c=='A') c = 'B';
    else if(c=='B') c = 'A';
}

char modChar(char c, int k){
    return (c+k>'Z'?'A':c+k);
}

int main()
{
    Mob;
    int n, k; cin >> n >> k;
    string s; cin >> s;
    if(k==2){
        int res1 = 0;
        char c = 'A';
        for(int i=0; i<n; i++){
            if(s[i]!=c) res1++;
            swapChar(c);
        }
        int res2 = 0;
        c = 'B';
        for(int i=0; i<n; i++){
            if(s[i]!=c) res2++;
            swapChar(c);
        }
        if(res1<=res2){
            cout << res1 << endl;
            c = 'A';
        } else{
            cout << res2 << endl;
            c = 'B';
        }
        for(int i=0; i<n; i++){
            cout << c;
            swapChar(c);
        }
    } else{
        if(n&1){
            string rs = s;
            int res = 0;
            for(int i=1; i<n; i++){
                if(s[i]==s[i+1] and s[i]==s[i-1]){
                    rs[i] = char(s[i+1]+1);
                    res++;
                } else if(s[i]==s[i+1]){
                    for(int j=0; j<k; j++){
                        if(modChar(s[i], j)!=s[i+1] and modChar(s[i], j)!=s[i+1]){
                            rs[i] = modChar(s[i], j);
                            res++;
                            break;
                        }
                    }
                } else if(s[i]==s[i-1]){
                    for(int j=0; j<k; j++){
                        if(modChar(s[i], j)!=s[i-1] and modChar(s[i], j)!=s[i+1]){
                            rs[i] = modChar(s[i], j);
                            res++;
                            break;
                        }
                    }
                }
            }
            cout << res << endl;
            cout << rs << endl;
        } else{
            
        }
    }
    return 0;
}
// i cant be bothered with this anymore lmfao