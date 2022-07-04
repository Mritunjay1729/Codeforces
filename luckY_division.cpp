#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> possible = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    cin >> n;
    int i=0;
    while(i < possible.size() && possible[i] <= n) {
        if(n%possible[i] == 0) {
            printf("YES\n");
            exit(0);
        }
        i++;
    }
    printf("NO\n");
    return 0;
}