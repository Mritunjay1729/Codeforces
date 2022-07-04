#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    string str;
    cin >> str;
    int i=1, count = 0, result = 0;
    while(y > 0) {
        y--;
        if(str[n-i] == '1') result++;
        i++;
    }
    if(str[n-i] == '0') result++;
    i++;
    while(i <= n && i < x+1) {
        if(str[n-i] == '1') result++;
        i++;
    }
    cout << result << endl;
    return 0;
}