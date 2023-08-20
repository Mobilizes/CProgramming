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


deque<string> dq;

int main()
{
    Mob;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        string s;
        if(q==1){
            cin >> s;
            dq.push_front(s);
        } else if(q==2){
            cin >> s;
            dq.push_back(s);
        } else if(q==3){
            cout << dq.front() << el;
            dq.pop_front();
        } else{
            cout << dq.back() << el;
            dq.pop_back();
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/