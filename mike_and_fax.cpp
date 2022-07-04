#include <iostream>

using namespace std;

int main() {
    string cpal; //concatenation of palindromes
    int n;
    cin >> cpal >> n;
    if(cpal.length()%n != 0) {printf("NO\n"); exit(0);}
    int size = cpal.length()/n;
    // cout << size << endl;
    int i=0, j = size-1;
    int count = 0;
    while(i < cpal.length()) {
        for(; i < j; i++, j--) {
            // cout << cpal.substr(i, j-i+1) << endl;
            if(cpal[i] != cpal[j]) {printf("NO\n"); exit(0);}
        }
        count++;
        i = count*size;
        j = i+size-1;
    }
    printf("YES\n");
    return 0;
}