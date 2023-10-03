#include <bits/stdc++.h>

typedef long long ll;

#define el "\n"

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        if(k<=ceil(n/2)) cout << 1+2*(k-1) << el;
        else if(k<=ceil(n/2)+ceil(n/4)) cout << 2+4*(k-1-ceil(n/2)) << el;
        else if(k<=ceil(n/2)+ceil(n/4)+ceil(n/8)) cout << 4+8*(k-1-ceil(n/2)-ceil(n/4)) << el;
        else cout << 8+8*(k-2-(ceil(n/2)+ceil(n/4)+ceil(n/8))) << el;
    }
    return 0;
}

// 4 8 12 16 20
// 1 3 5 7 9 11 13 15 17 19 2 6 10 14 18 4 12 20 8 16
// K <= ceil(N/2), mulai dari 1+2*(k-1)
// K <= ceil(N/2)+ceil(N/4), mulai dari 2+4*(k-1-ceil(N/2))
// K <= ceil(N/2)+ceil(N/4)+ceil(N/8), mulai dari 4+8*(k-1-ceil(N/2)-ceil(N/4))
// K > ceil(N/2)+ceil(N/4)+ceil(N/8), mulai dari 8+8*(k-1-ceil(N/2)-ceil(N/4)-ceil(N/8))

