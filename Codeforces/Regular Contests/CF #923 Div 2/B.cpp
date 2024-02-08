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
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        map<char, int> mp; for(char c='a'; c<='z'; c++) mp[c] = 0;
        for(int i=0; i<n; i++){
            for(char c='a'; c<='z'; c++){
                if(mp[c]==arr[i]){
                    cout << c;
                    mp[c]++;
                    break;
                }
            }
        }
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/