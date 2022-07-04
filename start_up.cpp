#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int flag = 0;
    char mirror[11] = {'A', 'H', 'I', 'M', 'O','T', 'U', 'V', 'W', 'X', 'Y'};
    for(int i=0, j = str.length()-1; i < j; i++, j--) {
        if(str[i] != str[j]) {printf("NO\n"); exit(0);}
        flag = 0;
        for(auto chr : mirror) {
            if(str[i] == chr) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {printf("NO\n"); exit(0);}
    }
    if(str.length()%2 == 1) {
        flag = 0;
        for(int i=0; i < 11; i++) {
            if(mirror[i] == str[str.length()/2]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {printf("NO\n"); exit(0);}
    }
    printf("YES\n");
    return 0; 
}