#include <iostream>
#include <vector>
#define pr pair<int, int>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pr> cards;
    int x, y;
    for(int i=0; i < n; i++) {
        cin >> x >> y;
        cards.push_back({y, x});
    }
    sort(cards.begin(), cards.end(), greater<pr>());
    int i=0; 
    int total_cards = 1;
    while(i < n) {
        if(cards[i].first == 0) break;
        total_cards+=cards[i].first;
        i++;
    }
    total_cards = min(n, total_cards);
    int score = 0;
    for(int i=0; i < total_cards; i++) score+=cards[i].second; 
    cout << score << endl;
    return 0;
}