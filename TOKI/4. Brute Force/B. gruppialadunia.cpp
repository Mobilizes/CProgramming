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


int n;
int arr[6];
int temp[6];

bool rec(int tim1, int tim2){
    if(tim2>=n){
        if(tim1>=n-1){
            for(int i=0; i<n; i++){
                if(arr[i]!=temp[i]) return false;
            }
            return true;
        } else return rec(tim1+1, tim1+2);
    }

    // if win
    temp[tim1]+=3;
    bool cond1 = rec(tim1, tim2+1);
    temp[tim1]-=3;

    // if tie
    temp[tim1]++; temp[tim2]++;
    bool cond2 = rec(tim1, tim2+1);
    temp[tim1]--; temp[tim2]--;

    // if lose
    temp[tim2]+=3;
    bool cond3 = rec(tim1, tim2+1);
    temp[tim2]-=3;

    return cond1 or cond2 or cond3;
}

int main(){
    Mob;
    tcs(){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(rec(0, 1)) cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}