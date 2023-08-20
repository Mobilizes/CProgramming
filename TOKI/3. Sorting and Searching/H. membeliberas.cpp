#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod (int)(1e9+7)

int n;
double x;
pair<double, double> arr[1001];

bool compare(pair<double, double> a, pair<double, double> b){
    return (a.second / a.first) > (b.second / b.first);
}

int main()
{
    Mob;
    cin >> n >> x;
    for(int i=0; i<n; i++) cin >> arr[i].first;
    for(int i=0; i<n; i++) cin >> arr[i].second;
    sort(arr, arr+n, compare);
    double result = 0;
    int index = 0;
    while(x>0){
        if(index==n) break;
        double currentkgcost = arr[index].second / arr[index].first;
        if(arr[index].first>0){
            x--;
            arr[index].first--;
            arr[index].second -= currentkgcost;
            result += currentkgcost;
        } else index++;
    }
    cout << fixed << setprecision(5) << result << endl;
    return 0;
}