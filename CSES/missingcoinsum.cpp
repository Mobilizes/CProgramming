#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
int n;
ll arr[200001];

int main()
{
    Mob;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int index = 0;
    ll sum = 0;
    while(index < n){
        if(sum + 1 >= arr[index]){
            sum += arr[index];
        } else{
            break;
        }
        index++;
    }
    cout << sum + 1 << endl;
    return 0;
}