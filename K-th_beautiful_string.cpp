#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, shift;
    string res;
    while(t--) {
        cin >> n >> k;
        int temp =n;
        int a=1;
        res = "";
        shift = 2;
        while(k>a) {
            k-=a;
            a+=1;
            shift++;
        }
        // cout << shift << endl;
        for(int i=0; i < n-shift; i++) res.push_back('a');
        res.push_back('b');
        n-=res.length();
        for(int i=0; i < n-k; i++) res.push_back('a');
        res.push_back('b');
        n = temp-res.length();
        for(int i=0; i < n; i++) res.push_back('a');
        cout << res << endl;
    }
    return 0;
}