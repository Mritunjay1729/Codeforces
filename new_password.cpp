#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string str = "";
    for(int i=0; i < n; i++) {
        str.push_back('a'+i%k);
    }
    cout << str << endl;
    return 0;
}

