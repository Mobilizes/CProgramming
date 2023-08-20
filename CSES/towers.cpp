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
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        int l = 0, r = vec.size();
        while(l<r){
            int mid = (l+r)/2;
            if(vec[mid] > x) r = mid;
            else l = mid + 1;
        }
        if(l==vec.size()) vec.push_back(x);
        else vec[l] = x;
    }
    cout << vec.size() << endl;
    return 0;
}
