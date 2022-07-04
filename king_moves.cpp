#include <iostream>

using namespace std;

int main() {
    string position;
    cin >> position;
    int c = position[0]-'a';
    int d = position[1]-'1';
    if(c == 0 || 7-c == 0) {
        if(d == 0 || 7-d == 0) {
            printf("3\n");
            exit(0);
        }else {
            printf("5\n");
        }
    } else if(d == 0 || 7-d == 0){
        printf("5\n");
    } else {
        printf("8\n");
    }
    return 0;
}