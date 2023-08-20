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


const int MAXSIZE = 1000000;
const int PRIMEMAXSIZE = 77777;

int prime[PRIMEMAXSIZE];
int idx = 0;
int prep[MAXSIZE/32+1] = {0};


// copied code, im not proud of it.
bool get(const int i){
    // how the fuck does compressing the entire prep array by 32 make the thing work?
    // wouldnt the index overlap?
    return prep[i/32] & (1<<(i%32));
}

void Set(const int i){
    if(get(i)==false){
        prep[i/32] ^= (1<<(i%32));
    }
}

void sieve(void){
    prime[idx++] = 2;
    for(int i=3; i<=MAXSIZE and idx < PRIMEMAXSIZE; i+=2){
        if(get(i)) continue;
        for(int j=3; j*i<=MAXSIZE; j+=2){
            Set(j*i);
        }
        prime[idx++] = i;
    }
}

int main()
{
    Mob;
    sieve();
    // for(int i=1000; i<=1100; i++) cout << prime[i] << el;
    tcs(){
        int k; cin >> k;
        cout << prime[k-1] << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/