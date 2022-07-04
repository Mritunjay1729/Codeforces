#include <iostream>
#include <map>
#define ll long long int
#define pr pair<ll, int>

using namespace std;

ll Parity(ll num) {
    ll n = 0, p=1;
    while(num > 0) {
        n = n+((num%10)%2)*p;
        num/=10;
        p*=10;
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<ll, int> multiset;
    // cout << Parity(125323) << endl;
    int n;
    cin >> n;
    char type;
    ll num;
    int count;
    while(n--) {
        cin >> type;
        cin >> num;
        if(type == '+') {
            num = Parity(num);
            multiset[num]++;
        }else if(type == '-') {
            num = Parity(num);
            multiset[num]--;
            if(multiset[num]  == 0) multiset.erase(num);
        }else{
            cout << multiset[num] << endl;
        }
    }
    return 0;
}