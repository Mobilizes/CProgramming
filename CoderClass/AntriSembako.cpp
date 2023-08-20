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

queue<string> q;

int main()
{
    Mob;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int c; cin >> c;
        if(c==1){
            string s; cin >> s;
            q.push(s);
        } else{
            cout << q.front() << el;
            q.pop();
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/