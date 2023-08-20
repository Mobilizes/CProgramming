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
int arr[1005];
int ans = 0;

void selection_sort(){
    for(int i=0; i<n; i++){
        int mn = arr[i];
        int idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<mn){
                mn = arr[j];
                idx = j;
            }
        }
        if(idx!=i){
            swap(arr[i], arr[idx]);
            ans++;
        }
    }
}

int main()
{
    Mob;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    selection_sort();
    cout << ans << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/