#include <iostream>

using namespace std;

int main() {
    string target, card;
    cin >> target;
    int flag = 0;
    for(int i=0; i < 5; i++) {
        cin >> card;
        if(flag == 1) continue;
        if(card[0] == target[0] || card[1] == target[1]) flag = 1;
    }
    if(flag == 1) printf("YES\n");
    else printf("NO\n");
    return 0;
}