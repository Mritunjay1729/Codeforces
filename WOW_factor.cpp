#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;
    vector<ll> W, O;
    ll flag = 1, i=0, count=1, sum = 0;
    while(str[i] == 'o') i++;
    i++;
    for(; i < str.length(); i++) { 
        if(str[i] == str[i-1]) count++;
        else {
            if(flag ==1) {W.push_back(count-1); sum+=count-1;}
            else O.push_back(count);
            count = 1;
            flag = !flag;
        }
    }
    if(flag ==1) {W.push_back(count-1); sum+=count-1;}
    // for(ll i=0; i < W.size(); i++) cout << W[i] << " ";
    // cout << endl;
    // for(ll i=0; i < O.size(); i++) cout << O[i] << " ";
    // cout << endl;

    ll left, right, wows = 0;
    left = W[0]; right = sum-W[0];
    for(ll i=0; i < W.size()-1; i++) {
        // cout << left  << " "  << right << endl;
        wows+=left*O[i]*right;
        left+=W[i+1];
        right-=W[i+1];
    }
    cout << wows << endl;
    return 0;
}