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

vector<bool> prep(1000000, true);
vector<int> prime;

void sieve(int n){
    for(int i=2; i<sqrt(n); i++){
        if(prep[i]) for(int j=i*i; j<n; j+=i) prep[j] = false;
    }
    for(int i=2; i<=n; i++){
        if(prep[i]) prime.push_back(i);
    }
}

int main()
{
    Mob;
    sieve(1000000);
    int n, k; cin >> n >> k;
    for(int i=0; i<=(n-1)*k; i+=k) printf("%d\n", prime[i]);
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Tahukah kalian tentang bilangan prima? Bilangan prima adalah bilangan yang hanya memiliki 2 faktor pembagi, yaitu 1 dan dirinya sendiri (1 bukan bilangan prima).

Kali ini, diberikan N dan K, keluarkan bilangan prima ke-1, K+1, 2*K+1, ..., (N-1)*K + 1.

Format Masukan
Satu baris berisi 2 buah bilangan bulat N dan K.

Format Keluaran
N baris, baris ke-i berisi bilangan prima ke-(i-1)*K+1.

Contoh Masukan
4 2
Contoh Keluaran
2
5
11
17
Batasan
1 ≤ N, K ≤ 50.000
1 ≤ (N-1)*K + 1 ≤ 50.000
*/