#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 

int main()
{
    Mob;
    int n; cin >> n;
    pair<int, int> arr[n+2];
    for(int i=0; i<n; i++){
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr, arr+n);
    int endtime = 0;
    int result = 0;
    for(int i=0; i<n; i++){
        if(arr[i].second >= endtime){
            endtime = arr[i].first;
            result++;
        }
    }
    cout << result << endl;
    return 0;
}