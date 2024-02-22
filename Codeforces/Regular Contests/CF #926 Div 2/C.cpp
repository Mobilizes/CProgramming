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
    tcs(){
        int k, x, a; cin >> k >> x >> a;
        if(k>x && a>x){
            cout << "YES" << el;
            continue;
        }
        int temp = a;
        bool flag = false;
        for(int i=1; i<=x; i++){
            temp -= i;
            if(temp<=0) break;
        }
        if(temp+(x+1)*k > a) flag = true;
        if(flag) cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/