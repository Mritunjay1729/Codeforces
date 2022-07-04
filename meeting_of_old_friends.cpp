#include <iostream>
#define ll long long int

using namespace std;

int main() {
    ll l1, r1, l2, r2, k;
    ll left, right;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if(l2 > r1 || r2 < l1) {printf("0\n"); exit(0);}
    else if(l2 >= l1) {
        left = l2;
        if(r2 < r1) right = r2;
        else right = r1;
    } else {
        left = l1;
        if(r2 < r1) right = r2;
        else right = r1;
    }
    ll time = right-left+1;
    if(k >= left && k <= right) time--;
    cout << time << endl;
    return 0;
}