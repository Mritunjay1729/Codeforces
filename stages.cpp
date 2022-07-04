#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    char alpha[26] = {0}, chr;
    for(int i=0; i <= m; i++) {
        scanf("%c", &chr);
        alpha[chr-'a']=1;
    } 

    int sum = 0, i= 0;
    while(n > 0 && i < 26) {
        if(alpha[i] != 0) {
            sum += 1+i; 
            i+=2; 
            n--;
        }
        else i++;
    }
    if(n > 0) printf("-1");
    else printf("%d", sum);
    return 0;
}