#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count_eight = 0, rest = 0;
    for(int i=0; i < n; i++) {
        if(str[i] == '8') count_eight++;
    }
    rest = n-count_eight;
    int possible_numbers = n/11;
    printf("%d\n", min(possible_numbers, count_eight));
    return 0;
}