#include <iostream>
#include <map>

using namespace std;

int main() {
    int people, cash = 1;
    cin >> people;
    int hr, min;
    map<int, int> count;
    while(people--) {
        cin >> hr >> min;
        if(count.find(hr*100+min) == count.end()) {
            count[hr*100 + min] = 1;
        } else {
            int t = ++count[hr*100 + min];
            cash = max(cash, t);
        }
    }
    printf("%d\n", cash);
    return 0;
}