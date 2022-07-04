#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string rap;
    int flag = 0;
    cin >> rap;
    string rapword = "WUB";
    for(int i=0; i < rap.length(); i++) {
        flag = 0;
        for(int j=0; j < 3; j++) {
            if(rap[i+j] != rapword[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {rap.replace(rap.begin()+i, rap.begin()+i+3, ((i>0 && rap[i-1]!=' ')?" ":""));i--;}
    }
    cout << rap << endl;
    return 0;
}