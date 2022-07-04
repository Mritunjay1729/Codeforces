#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, photo;
    cin >> n;
    map<int, int> likes;
    int max = 0, winner;
    while(n--) {
        cin >> photo;
        likes[photo]++;
        if(likes[photo] > max) {max = likes[photo]; winner = photo;}
    }
    printf("%d\n", winner);
    return 0;
}