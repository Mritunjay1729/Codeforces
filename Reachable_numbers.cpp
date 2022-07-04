#include <iostream>
#include <set>

int operation(int n) {
    n++;
    while(n%10 == 0) n/=10;
    return n;
}

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> numbers;
    while(numbers.find(n) == numbers.end()) {
        numbers.insert(n);
        n = operation(n);
    }
    cout << numbers.size() << endl;
}