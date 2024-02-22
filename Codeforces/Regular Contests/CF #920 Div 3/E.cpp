#include <bits/stdc++.h>
#include <algorithm>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int h, w, xa, ya, xb, yb; cin >> h >> w >> xa >> ya >> xb >> yb;
    int t;
    string winner;
    bool win = true;
    if((xa-xb)%2==0){
        winner = "Bob";
        if(xa>=xb) win = false;
        else if(ya==yb) win = true;
        else{
            if(ya<yb) t = yb - 1;
            else t = w - yb;
            win = xb - 2*t >= xa;
        }
    } else{
        winner = "Alice";
        xa++;
        if(yb>ya) ya++;
        else if(yb<ya) ya--;

        if(xa>xb) win = false;
        else if(ya==yb) win = true;
        else{
            if(ya<yb) t = w - ya;
            else t = ya - 1;
            win = xb - 2*t >= xa;
        }
    }
    cout << (win ? winner : "Draw") << el;
}

int main(int argc, char const* argv[]){
    Mob;
    tcs() solve();
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/