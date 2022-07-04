#include <iostream>

using namespace std;

int main() {
    string gogol, pineapple;
    cin >> gogol >> pineapple;
    int flag, count = 0;
    if(gogol.size() < pineapple.size()) {printf("%d\n", 0); exit(0);}
    for(int i=0; i < gogol.size()-pineapple.size()+1; i++) {
        flag = 0;
        for(int j=0; j < pineapple.size(); j++) {
            if(gogol[i+j] != pineapple[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {count++; i+=pineapple.size()-1;}
    }
    printf("%d\n", count);
    return 0;
}