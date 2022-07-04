#include <iostream>

using namespace std;

int main() {
    string name;
    cin >> name;
    int counter = 0, k, number_of_rotations = 0;
    for(int i=0; i < name.length(); i++) {
        // cout << counter << endl;
        k = abs(name[i]-'a'-counter);
        number_of_rotations += min(k, 26-k);
        counter = name[i]-'a';
    }
    printf("%d\n", number_of_rotations);
    return 0;
}