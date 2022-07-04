#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string line;
    cin >> line;
    string req = "";
    for(int i=0; i < n/2; i++) req.append("rb");
    if(n%2 == 1) req.push_back('r'); 
    int b, r;
    r = b  = 0;
    for(int i=0; i < n; i++) {
        if(line[i] != req[i]) {
            if(line[i] == 'r') r++;
            else b++;
        }
    }
    int count = max(r, b);

    req = "";
    for(int i=0; i < n/2; i++) req.append("br");
    if(n%2) req.push_back('b');
    r = b = 0;
    for(int i=0; i < n; i++) {
        if(line[i] != req[i]) {
            if(line[i] == 'r') r++;
            else b++;
        }
    }
    cout << min(count, max(r, b)) << endl;
    return 0;
}