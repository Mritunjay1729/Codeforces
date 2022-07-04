#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<char> rank = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    map<char, int> rankings;
    for(int i=0; i < rank.size(); i++) {rankings[rank[i]] = i+1;}
    char trump;
    string card1, card2;
    cin >> trump;
    cin >> card1 >> card2;
    if(card1[1] == trump && card2[1] != trump) {printf("YES\n"); exit(0);}
    if(
        card1[1] == card2[1] && 
        rankings[card1[0]] > rankings[card2[0]]
    ) {
        printf("YES\n"); exit(0);
    }
    printf("NO\n");
    return 0;
}