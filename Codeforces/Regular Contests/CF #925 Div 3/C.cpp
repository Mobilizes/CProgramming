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
        vector<int> vec(n); for(int i=0; i<n; i++) cin >> vec[i];
        int i = 1, j = n-2;
        for(; i<n; i++){
            if(vec[i]!=vec[0]) break;
        }
        for(; j>=0; j--){
            if(vec[j]!=vec[n-1]) break;
        }
        if(vec[0]==vec[n-1]){
            cout << max(j-i+1, 0) << el;
        } else{
            cout << min(n-i, j+1) << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/