#include <iostream>

using namespace std;

int main() {
    int n, num, max, min, amazing;
    cin >> n >> num;
    max = min = num;
    amazing = 0;
    for(int i=0; i < n-1; i++) {
        cin >> num;
        if(num > max) {amazing++; max = num;}
        else if(num < min) {amazing++; min = num;}
    }
    printf("%d\n", amazing);
    return 0;
}