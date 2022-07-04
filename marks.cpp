#include <iostream>
#include <set>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    set<int> successful;
    string str[n];
    char max_marks = '0';
    for(int i=0; i < n; i++) cin >> str[i];
    for(int j=0; j < m; j++) {
        max_marks = '0';
        for(int i=0; i < n; i++) {
            if(str[i][j] > max_marks){
                max_marks = str[i][j];
            }
        }
        for(int i=0; i < n; i++) {
            if(max_marks == str[i][j]) {
                if(successful.find(i) == successful.end()) successful.insert(i);
            }
        }
    }
    printf("%lu\n", successful.size());
    return 0;
}