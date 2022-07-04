#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int s, count = 0;
    for(int i=1; i*i <= x && i <= n; i++) {
        if(x%i == 0) {
          s = x/i;
          if(s<=n) count+=2;
          if(s == i) count-=1;
        } 
    }
    printf("%d\n", count);
    return 0;
}