#include <iostream>

using namespace std;

int main() {
    int friends;
    cin >> friends;
    int sum =0, fingers;
    for(int i=0; i < friends; i++) {
        cin >> fingers;
        sum+=fingers;
    }

    int choice = 0;
    for(int i=1; i <= 5; i++) {
        if((sum+i)%(friends+1) != 1) choice++;
    }
    printf("%d\n", choice);
    return 0;
}