#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() != str2.length()) {printf("-1\n"); exit(0);}
    for(int i=0; i < str1.length(); i++) {
        if(str1[i] != str2[i] && str1[i]+32 != str2[i] && str1[i]-32 != str2[i]) {
            if(str1[i] <= 90) str1[i]+= 32;
            if(str2[i] <= 90) str2[i]+= 32;
            printf("%d\n", (str1[i]-str2[i])>0?1:-1);
            exit(0);
        }
    }
    printf("0\n");
    return 0; 
}