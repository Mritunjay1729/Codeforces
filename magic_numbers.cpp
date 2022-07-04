#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int flag = 0;
    string pattern = "1";
    if(str[0] != '1') {
        printf("NO\n");
        exit(0);
    }
    
    for(int i=0; i < str.length(); i++) {
        if(str[i] == '1') {
            if(pattern == "1" || pattern == "14" || pattern == "144")
                pattern = "1";
            else {
                printf("NO\n");
                flag = 1;
                break;
            }
        } else {
            pattern.push_back(str[i]);
        }
    }
    if(flag == 0) 
         if(pattern == "1" || pattern == "14" || pattern == "144") printf("YES\n");
         else printf("NO\n");
    return 0;
}