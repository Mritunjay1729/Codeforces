#include <iostream>

using namespace std;

int main() {
    int n, m, num;
    cin >> n >> m;
    for(int i=1; i <= n; i++) {
        for(int j=1; j <=m; j++) {
            cin >> num;
            if(num) {
                if(i == 1 || j == 1 || i == n || j == m) {printf("2"); exit(0);}
            }
        }
    }
    printf("4\n");
    return 0;
}