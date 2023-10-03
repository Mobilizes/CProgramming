#include <bits/stdc++.h>

typedef long long ll;

#define el "\n"

using namespace std;

int main(){
    int n; cin >> n;
    double arr[n];
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double mn = arr[0]+arr[n-1];
    double local_mn = mn;
    double mnlen = 2;
    double len = 2;
    for(int i=1; i<n-1; i++){
        if((local_mn+arr[i])/(len+1)>=((arr[0]+arr[i]+arr[n-1])/3)){
            len = 3;
            local_mn = (arr[0]+arr[i]+arr[n-1]);
        } else{
            len++;
            local_mn = (local_mn+arr[i]);
        }
        if(local_mn/len<=mn/mnlen){
            mn = local_mn;
            mnlen = len;
        }
    }
    printf("%.2lf\n", mn/mnlen);
}