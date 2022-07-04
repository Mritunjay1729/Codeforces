#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    char w;
    int a=0, d = 0;
    while(n--) {
        cin >> w;
        w=='A'?a++:d++;
    }
    if(a > d) printf("Anton\n");
    else if(a < d) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}