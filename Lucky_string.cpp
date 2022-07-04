#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str = "";
    for(int i=0; i < n; i++) {
        switch (i%4) {
        case 0:
            str.push_back('a');
            break;
        
        case 1:
            str.push_back('b');
            break;
        
        case 2:
            str.push_back('c');
            break;
        
        case 3:
            str.push_back('d');
            break;
        
        default:
            cout << "Error occured!\n";
            exit(0);
        }
    }
    cout << str << endl;
    return 0;
}