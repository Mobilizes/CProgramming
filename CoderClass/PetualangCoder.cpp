#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod (ll)(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


ll power(ll a, ll b){
    if(b==0) return 1;
    else if(b%2==0) return (power(a, b/2) * power(a, b/2)) % mod;
    else return (a * power(a, b/2) * power(a, b/2)) % mod;
}

int main()
{
    Mob;
    ll n; cin >> n;
    cout << (power(2, n) - 1) % mod << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Anda sedang dalam petualangan menjadi coder terbaik, like no one ever was. Dalam rute yang anda tempuh, terdapat N warung internet tempat anda bisa menimba ilmu. Tentunya, untuk setiap warung internet, Anda bisa memutuskan untuk mengunjunginya atau tidak. Namun, karena ingin petualangan Anda tidak sia-sia, anda ingin agar anda mengunjungi setidaknya 1 warung internet. Namun, sekarang Anda penasaran, ada berapa cara memilih warung internet yang akan dikunjungi? Karena banyaknya cara bisa sangat besar, Anda memutuskan untuk menghitungnya hanya dalam modulo 109+7.

Format Masukan
Satu baris berisi sebuah bilangan bulat N, banyak warung internet.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, banyak cara memilih warung internet yang akan dikunjungi dalam modulo 109+7.

Contoh Masukan
3
Contoh Keluaran
7
Batasan
1 ≤ N ≤ 109
*/