#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


int main()
{
    Mob;
    int t; cin >> t;
    testcases(t){
        int n; cin >> n;
        pair<int, int> arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i].first;
            arr[i].first = arr[i].first & 1;
            arr[i].second = i+1;
        }
        sort(arr, arr+n);
        if((arr[0].first+arr[1].first+arr[2].first)&1){
            cout << "YES" << endl;
            cout << arr[0].second << ' ' << arr[1].second << ' ' << arr[2].second << endl;
        } else if((arr[n-1].first+arr[0].first+arr[1].first)&1){
            cout << "YES" << endl;
            cout << arr[n-1].second << ' ' << arr[0].second << ' ' << arr[1].second << endl;
        } else if((arr[n-1].first+arr[n-2].first+arr[0].first)&1){
            cout << "YES" << endl;
            cout << arr[n-1].second << ' ' << arr[n-2].second << ' ' << arr[0].second << endl;
        } else if((arr[n-1].first+arr[n-2].first+arr[n-3].first)&1){
            cout << "YES" << endl;
            cout << arr[n-1].second << ' ' << arr[n-2].second << ' ' << arr[n-3].second << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}