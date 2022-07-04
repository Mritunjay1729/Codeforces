#include <iostream>
#include <map>

using namespace std;

int main() {
    int stick;
    map<int, int> sticks;
    for(int i=0; i < 6; i++) {
        cin >> stick;
        sticks[stick]++;
    }

    if(sticks.size() >= 4) printf("Alien\n");
    else {
        if(sticks.size() == 1) {printf("Elephant\n");}
        else if(sticks.size() == 2) {
            if(sticks.begin()->second == 2 || sticks.begin()->second == 4) printf("Elephant\n");
            else if(sticks.begin()->second == 5 || sticks.begin()->second == 1) printf("Bear\n");
            else printf("Alien\n");
        } else {
            for(auto stick : sticks) {
                if(stick.second == 4) {printf("Bear\n"); exit(0);}
            } 
            printf("Alien\n");
        }
    }
    return 0;
}