#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, x = 0, temp;
    cin >> a >> b;
    int arr1[a] = {}, arr2[b] = {};
    for(int i=0; i<a; i++)
    {
        cin >> temp;
        arr1[i] = temp;
    }
    for(int i=0; i<b; i++)
    {
        cin >> temp;
        arr2[i] = temp;
    }
    std::sort(arr1, arr1+a);
    std::sort(arr2, arr2+b);

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(arr1[i]==arr2[j] or arr1[i]==arr2[j]-1)
            {
                x++;
                arr2[j] = 10002;
                break;
            }
        }
    }

    cout << x;
}