#include <iostream>
#define ll long long int

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    ll days = 0, x;
    int m = min(a/3, min(b/2, c/2));
    a-=3*m;
    b-=2*m;
    c-=2*m;
    days+=7*m;
    ll ta, tb, tc;
    int j;
    int k = 0, q = 0;
    for(int i=0; i < 7; i++) {
        m = 7;
        j = i;
        ta = a, tb = b, tc = c;
        k = 0;
        while(m--) {
            if(j == 1 || j == 2 || j == 5) {
                if(ta) {k++; ta--;}
                else break;
            }else if(j == 3 || j == 0) {
                if(tb) {k++; tb--;}
                else break;
            }else{
                if(tc) {k++; tc--;}
                else break;
            }
            j++;
            if(j == 7) j = 0;
        }
        q = max(q, k);
    }
    days+=q;
    cout << days << endl;
    return 0;
}