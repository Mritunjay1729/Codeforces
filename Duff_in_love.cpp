#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {    
    ll number;
    cin >> number;
    vector<ll> forward, backward;
    for(ll i=1; i*i <= number; i++) {
        if(number%i == 0) {
            forward.push_back(i);
            backward.push_back(number/i);
        }
    }
    int flag = 0;
    for(ll i=forward.size()-1; i >= 0; i--) backward.push_back(forward[i]);
    for(auto number : backward) {
        // cout << number << endl;
        flag = 0;
        for(ll i=2; i*i <= number; i++) {
            if(number%(i*i)==0) {flag = 1; break;}
        }
        if(flag == 0) {cout << number << endl; break;}
    }
    return 0;
}