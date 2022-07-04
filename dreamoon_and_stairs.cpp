#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(m > n) {printf("%d\n", -1); exit(0);}
    int number_of_moves = n/2+n%2;
    int half = 0;
    if(number_of_moves%m != 0) {
        while((number_of_moves+half)%m != 0 && number_of_moves > n%2) {
            number_of_moves-=1;
            half += 2;
        }
    }
    printf("%d\n", number_of_moves+half);
    return 0;
}