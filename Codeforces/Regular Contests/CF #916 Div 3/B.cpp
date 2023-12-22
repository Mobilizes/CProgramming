#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
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
        int n, k; cin >> n >> k;
        // if(n==2 && k==1){
        //     cout << "1 2\n";
        //     continue;
        // }
        for(int i=1; i<=k; i++) cout << i << ' ';
        for(int i=n; i>k; i--) cout << i << ' ';
        
        cout << el;
    }
    return 0;
}

// 5 4 3 2 1
// 4 5 3 2 1
// 3 4 5 2 1

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/