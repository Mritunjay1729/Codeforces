#include <iostream>

using namespace std;

int main() {
    string stones, instruct;
    cin >> stones >> instruct;
    int curr = 0;
    for(int i=0; i < instruct.length() && curr <= stones.length(); i++) {
        if(instruct[i] == stones[curr]) curr++;
    }
    printf("%d\n", curr+1);
    return 0;
}