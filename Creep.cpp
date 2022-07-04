#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b;
    string result;
    while(t--) {
        result = "";
        cin >> a >> b;
        while(a > 0 && b > 0) {
            result.append("01");
            a--; b--;
        }
        while(a-- > 0) {result.push_back('0');}
        while(b-- > 0) {result.push_back('1');}
        cout << result << endl;
    }

    return 0;
}