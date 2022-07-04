#include <iostream>
#include <bits/stdc++.h>

#define ll long long 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> mat(n);
    for(int i=0; i < n; i++) cin >> mat[i];
    sort(mat.begin(), mat.end());

    ll x, y;
    int i, j;
    x = y = 0;
    i = 0, j = n-1;
    while(i < j) {
        x += mat[i++];
        y += mat[j--];
    }
    if(i == j) y+=mat[i];
    cout << x*x + y*y << endl;
    return 0;
}