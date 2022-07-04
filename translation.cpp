#include <iostream>

using namespace std;

int main() {
    string encoded, decoded;
    cin >> encoded >> decoded;
    if(encoded.length() != decoded.length()) {
        printf("NO\n");
        exit(0);
    }
    for(int i=0; i < encoded.length(); i++) {
        if(encoded[i] != decoded[decoded.length()-1-i]) {
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");
    return 0;
}