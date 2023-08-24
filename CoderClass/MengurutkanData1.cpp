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
    int n; cin >> n;
    int arr[n+5];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout << arr[i] << ' ';
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Pekerjaan pertama anda setelah diterima di salah satu perusahaan terkemuka adalah menyortir data. Lebih spesifiknya, anda diminta untuk mengurutkan data secara menaik. Terdapat N data, yang masing-masing berupa bilangan bulat.

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyaknya data.

Baris kedua berisi N buah bilangan bulat, data-data yang ingin diurutkan secara menaik.

Format Keluaran
Satu baris berisi N buah bilangan bulat, data setelah diurutkan secara menaik. Pisahkan tiap bilangan menggunakan spasi.

Contoh Masukan
3
4 2 1
Contoh Keluaran
1 2 4
Batasan
1 ≤ N ≤ 1.000
1 ≤ datai ≤ 105
*/