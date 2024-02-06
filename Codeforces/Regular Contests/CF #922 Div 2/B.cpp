#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'


int main(int argc, char const* argv[]){
    Mob;
    tcs(){
        int n; cin >> n;
        vector<pair<int, int>> arr(n);
        for(auto &i : arr) cin >> i.first;
        for(auto &i : arr) cin >> i.second;
        sort(arr.begin(), arr.end());
        for(auto i : arr) cout << i.first << ' ';
        cout << el;
        for(auto i : arr) cout << i.second << ' ';
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/
/*
2 3 4 6 5 1 (6)
1 2 4 3 5 6 (1)

*/