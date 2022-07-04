#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0, flag = 0;
    for(int i=0; i < n; i++) {
        if(flag == 0 && str[i] == '-') continue;
        else if(flag == 0 && str[i] == '+') {
            flag = 1;
            count++;
        } else {
            if(str[i] == '+') count++;
            else if(str[i] == '-' && count > 0) count--;
        }
        // cout << str[i] << " " << count << endl;
    }
    printf("%d\n", count);
    return 0;
}