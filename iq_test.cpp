#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int odd, even, index;
    int e, o, e_index, o_index;
    e = o = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num%2==0) {e++; e_index=i+1;}
        else {o++; o_index=i+1;}
    }
    if(e == 1) cout << e_index << endl;
    else cout << o_index << endl;
    return 0;
}