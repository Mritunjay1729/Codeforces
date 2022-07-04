#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    vector<int> factors; 
    for(int i=1; i*i <= n; i++) {
        if(n%i == 0) {
            factors.push_back(i);
            if(n/i != i) factors.push_back(n/i);
        }
    }
    sort(factors.begin(), factors.end());
    for(int i=0; i < factors.size(); i++) {
        reverse(str.begin(), str.begin()+factors[i]);
    }
    cout << str << endl;
    return 0; 
}