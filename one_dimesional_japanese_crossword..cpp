#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> cross;
    int black = 0, count = 0;
    for(int i=0; i < n; ++i) {
        if(str[i] == 'W' && count > 0) {
            black++;
            cross.push_back(count);
            count = 0;
        } else if(str[i] == 'B'){
            count++;
        }
    }
    if(str[str.length()-1] == 'B') {cross.push_back(count); black++;}
    printf("%d\n", black);
    for(int i=0; i < cross.size(); i++) cout << cross[i] << " ";
    if(black!=0) cout << endl;
    return 0;
}