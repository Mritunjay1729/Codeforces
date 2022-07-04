#include <iostream>

using namespace std;

int main() {
    int n, a, b, flag = 0, prev = INT32_MIN;
    int count = 0;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> a >> b;
        if(flag == 1) continue;
        if(a != b) {
            flag = 1;
        } else if(a == b) {
            if(a <= prev) count++;
        }
        prev = a;
    }
    if(flag == 1) printf("rated\n");
    else if(count == n-1) printf("maybe\n");
    else if(!flag) printf("unrated\n");
    return 0;
}