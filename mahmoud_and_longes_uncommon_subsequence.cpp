#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if(a.length() != b.length()) printf("%lu\n", max(a.length(), b.length()));
    else {
        if(a == b) printf("-1\n");
        else printf("%lu\n", a.length());
    }
    return 0;
}