#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;

int main()
{
	Mob;
    int t; cin >> t;
    while(t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        if(arr[0]+arr[1]==arr[2]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}