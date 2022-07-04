#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin >> n;
    vector<int> coins(n);
    int sum = 0;
    for(int i=0; i <n; i++) {
        cin >> coins[i];
        sum+=coins[i];
    }
    sum = sum/2 + 1;
    sort(coins.begin(), coins.end(), greater<int>());
    int i=0;
    int count = 0, nearest = 0;
    while(nearest < sum) {
        nearest += coins[i];
        i++;
    }
    printf("%d\n", i);
    return 0;
}