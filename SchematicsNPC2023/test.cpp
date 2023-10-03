#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 4;
    int arr[4] = {10, 3, 3, 4};
    int mn = 100;
    int local_mn = 100;
    for(int i=0; i<n; i++){
        local_mn = min(arr[i], local_mn+arr[i]);
        mn = min(mn, local_mn);
    }
    cout << mn << endl;
}