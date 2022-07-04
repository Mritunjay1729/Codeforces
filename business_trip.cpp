#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> months(12);
    for(int i=0; i < 12; i++) {
        cin >> months[i];
    }
    sort(months.begin(), months.end(), greater<int>());
    int i=0;
    while(k > 0 && i < 12) {
        k-=months[i++];
    }
    if(k > 0) printf("%d\n", -1);
    else printf("%d\n", i);
    return 0;
}