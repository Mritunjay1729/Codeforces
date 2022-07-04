#include <iostream>

using namespace std;

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    int count = 0;
    count += 2*h1+w1+2*h2+w2+4;
    if(w2 != w1) count+=abs(w2-w1);
    cout << count << endl;
    return 0;
}