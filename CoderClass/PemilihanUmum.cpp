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


int main()
{
    Mob;
    ll a, b; cin >> a >> b;
    ll res = a*b / __gcd(a, b);
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Di Pulau CompFest, terdapat 2 partai politik, yaitu partai C dan partai F. Kedua partai ini sering berbeda pendapat, seperti yang baru-baru ini terjadi, mereka memperdebatkan tentang masa jabatan presiden di Pulau CompFest. Partai C ingin agar masa jabatan merupakan kelipatan A tahun, sedangkan partai F ingin masa jabatan merupakan kelipatan B tahun. Tentunya, kedua partai ini tidak ingin agar masa jabatan terlalu lama. Sebagai penduduk yang bijaksana, anda diminta untuk mencari masa jabatan terpendek yang dapat memuaskan keinginan kedua partai tersebut.

Format Masukan
Satu baris berisi dua buah bilangan bulat A dan B, sesuai deskripsi soal.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, masa jabatan terpendek yang memenuhi keinginan partai C dan partai F.

Contoh Masukan
4 6
Contoh Keluaran
12
Batasan
1 ≤ A, B ≤ 109
*/