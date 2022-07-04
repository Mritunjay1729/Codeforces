#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string bin;
    cin >> bin;
    string correct_bin = "";
    correct_bin.push_back(bin[0]);
    for(int i=1; i < n; i++) {
        if(bin[i] == '1') continue;
        correct_bin.push_back(bin[i]);
    }
    cout << correct_bin << endl;
    return 0;
}