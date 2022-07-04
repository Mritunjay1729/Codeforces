#include <iostream>

using namespace std;

int main() {
    int len, diff, no_of_rotations=0;
    cin >> len;
    string current, passwd;
    cin >> current >> passwd;
    for(int i=0; i < current.length(); i++) {
        diff = abs(current[i]-passwd[i]);
        no_of_rotations += min(diff, 10-diff);        
    }
    printf("%d\n", no_of_rotations);
    return 0;
}