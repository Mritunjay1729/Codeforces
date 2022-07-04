#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, num;
    cin >> n;
    while(n--) {
        cin >> num;
        if(num%2 == 0) num--;
        cout << num << " ";
    }
    cout << endl;
    return 0;
}