#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int odd, even;
    odd = even = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num%2) odd++;
        else even++;    
    }
    if(odd%2==1) cout << odd << endl;
    else cout << even << endl;
    return 0;
}