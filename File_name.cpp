#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    int total = 0;
    for(int i=0; i < n; i++) {
        if(count == 0 && str[i] == 'x') count = 1;
        else if(str[i] == 'x' && str[i-1] == str[i]) count++;
        else{
            if(count > 2) total+=count-2;
            count = 0;
        }
    }
    if(count > 2) total+=count-2;
    cout << total << endl;
    return 0;
}