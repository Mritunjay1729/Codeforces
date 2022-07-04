#include <iostream>

using namespace std;

int main() {
    string caps;
    cin >> caps;
    int n = caps.length(), count = 0;
    for(int i=1; i < n; i++) {
        if(caps[i] <= 90) count++;
    }
    if(count == n-1) {
        if(caps[0] >= 97) caps[0]-=32;
        else caps[0]+=32;
        for(int i=1; i < n; i++) caps[i]+=32;
    }
    cout << caps << endl;
    return 0;
}