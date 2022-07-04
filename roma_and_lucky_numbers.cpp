#include <iostream>

using namespace std;

int main() {
    int n, k, num;
    cin >> n >> k;
    int count, r, lucky=0;
    while(n--) {
        count = 0;
        cin >> num;
        while(num > 0) {
            r = num%10;
            if(r == 4 || r == 7) count+=1;
            if(count > k) break;
            num/=10;
        }
        if(count <= k) lucky+=1;
    }
    printf("%d\n", lucky);
    return 0;
}