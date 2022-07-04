#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    vector<int> months(n);
    for(int i=0; i <n; i++) cin >> months[i];
    int count = 0;
    for(int i=0; i < n-1; i++) {
        count+=d-months[i];
    }
    cout << count << endl;
    return 0;
}