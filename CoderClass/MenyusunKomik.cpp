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


int n;
int arr[1005];
int ans = 0;

void selection_sort(){
    for(int i=0; i<n; i++){
        int mn = arr[i];
        int idx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<mn){
                mn = arr[j];
                idx = j;
            }
        }
        if(idx!=i){
            swap(arr[i], arr[idx]);
            ans++;
        }
    }
}

int main()
{
    Mob;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    selection_sort();
    cout << ans << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Anda baru saja pulang berlibur dari Pulau CompFest. Sesampainya di rumah, anda mendapati bahwa rumah anda kemasukan maling! Anehnya, maling tersebut hanya mengincar beberapa buku di lemari buku anda. Akibat tingkah pencuri tersebut, beberapa buku di lemari anda posisinya menjadi teracak. Akhirnya, anda memutuskan untuk mengurutkan buku-buku anda. Sekarang, anda ingin mengurutkan komik favorit anda yaitu Naturo. Sampai detik ini, anda memiliki N jilid komik Naturo. Dalam mengurutkan, anda dapat menukar posisi 2 komik dalam satu detik. Diberikan susunan komik saat ini, berapa waktu minimal yang dibutuhkan untuk mengurutkan komik-komik Naturo anda secara menaik?

Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyaknya komik yang ingin diurutkan.

Baris kedua berisi N buah bilangan bulat, dengan bilangan ke-i merupakan nomor jilid yang berada di posisi ke-i.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, waktu minimal yang dibutuhkan untuk mengurutkan komik secara menaik.

Contoh Masukan
4
3 1 2 4
Contoh Keluaran
2
Penjelasan
Salah satu cara yang membutuhkan dua langkah adalah:

Tukar buku posisi 2 dan 3. Sekarang, urutannya 3 2 1 4.
Tukar buku posisi 1 dan 3. Sekarang, urutannya 1 2 3 4.
Batasan
1 ≤ N ≤ 1.000
Dijamin nomor-nomor jilid yang diberikan adalah 1..N, dan unik.
*/