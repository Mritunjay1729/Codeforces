#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> shoes;
    int shoe;
    for(int i=0; i < 4; i++) {cin >> shoe; shoes.insert(shoe);}
    cout << 4-shoes.size() << endl; 
    return 0;
}