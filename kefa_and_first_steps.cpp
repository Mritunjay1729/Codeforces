#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int max_length = 0, prev = -1, length = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num >= prev) {
            length+=1;
        }else{
            max_length = max(length, max_length);
            length = 1;
        }
        prev = num;
    }
    max_length = max(length, max_length);
    printf("%d\n", max_length);
    return 0;
}