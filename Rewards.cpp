#include <iostream>

using namespace std;

int main() {
    int reward;
    int cups = 0, medals = 0;
    for(int i=0; i < 3; i++) {cin >> reward; cups+=reward;}
    for(int i=0; i < 3; i++) {cin >> reward; medals+=reward;}
    int shelves;
    cin >> shelves;
    int shelves_required = 0;
    shelves_required = cups/5 + (cups%5 != 0);
    shelves_required += medals/10 + (medals%10 != 0);
    if(shelves_required <= shelves) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}