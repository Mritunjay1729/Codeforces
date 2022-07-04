#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string genome1, genome2;
    cin >> genome1 >> genome2;
    int first;
    int count = 0;
    if(genome1.length() != genome2.length()) {printf("NO\n"); exit(0);}
    for(int i=0; i < genome1.length(); i++) {
        if(genome1[i] != genome2[i]) {
            if(count == 0) {count++; first = i;}
            else if(count == 1) {
                count++;
                if(genome1[first] == genome2[i] && genome2[first] == genome1[i]) continue;
                else {printf("NO\n"); exit(0);}
            } else {printf("NO\n"); exit(0);}
        }
    }
    if(count == 1 || count == 0) printf("NO\n");
    else printf("YES\n");
    return 0;
}