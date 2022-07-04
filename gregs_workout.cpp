#include <iostream>

using namespace std;

int main() {
    int n, exercise;
    cin >> n;
    int chest, biceps, back;
    chest = biceps = back = 0;
    for(int i=1; i <= n; i++) {
        cin >> exercise;
        if(i%3==1) chest+=exercise;
        else if(i%3==2) biceps+=exercise;
        else back+=exercise;
    }
    if(biceps > chest) {
        if(biceps > back) printf("biceps\n");
        else {
            if(chest > back) printf("chest\n");
            else printf("back\n");
        }
    }else {
        if(chest > back) printf("chest\n");
        else printf("back\n");
    }
    return 0;
}