#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> alpha_count(k, 0);
    string str;
    cin >> str;
    for(int i=0; i < str.length(); i++) {
        alpha_count[str[i]-'A']++;
    }

    int max_count = INT32_MAX;
    for(int i=0; i < k; i++) max_count = min(alpha_count[i], max_count);
    cout << max_count*k << endl;
    return 0;
}