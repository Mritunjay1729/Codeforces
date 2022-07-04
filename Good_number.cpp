#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    char k;
    cin >> n >> k;
    string number;
    set<char> digits;
    int count = 0, flag = 0;
    for(int i=0; i < n; i++) {
        cin >> number;
        digits.clear();
        flag = 0;
        for(int j=0; j < number.length(); j++) {
            digits.insert(number[j]);
        }
        for(int j=0; j <= k-'0'; j++) {
            if(digits.find('0'+j) == digits.end()) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) count++;
    }
    cout << count << endl;
    return 0;
}