#include <iostream>

using namespace std;

int main() {
    int a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    int max_out = 0;
    if(k1 == k2) max_out = n/k1;
    else if(k2 > k1) {
        max_out = min(a1, n/k1);
        if(a1 < n/k1) max_out+=min(a2, (n-a1*k1)/k2);
    }else{
        max_out = min(a2, n/k2);
        if(a2 < n/k2) max_out+=min(a1, (n-a2*k2)/k1);
    }

    int min_out = 0;
    n-=(k1-1)*a1 + (k2-1)*a2;
    if(n > 0) min_out = min(n, (a1+a2));

    cout << min_out << " " << max_out << endl; 
    return 0;
}