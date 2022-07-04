#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> count;
    int n, call, no_of_pairs = 0;
    cin >> n;

    int flag = 0;
    while(n--) {
        cin >> call;
        if(call == 0) continue;
        count[call]++;
        if(count[call] == 2) no_of_pairs++;
        else if(count[call] == 3) {
            printf("%d\n", -1);
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("%d\n", no_of_pairs);
    return 0;
}