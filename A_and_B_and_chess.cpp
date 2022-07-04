#include <iostream>

using namespace std;

// Q9, R5, B3, N3, P1
int main() {
    string str;
    int w_point, b_point;
    b_point = w_point = 0;
    for(int i=0; i < 8; i++) {
        cin >> str;
        for(int j=0; j < 8; j++) {
            if(str[j] == '.') continue;
            else if(str[j] >= 65 && str[j] <= 90) {
                if(str[j] == 'Q') w_point += 9;
                else if(str[j] == 'R') w_point += 5;
                else if(str[j] == 'B') w_point += 3;
                else if(str[j] == 'N') w_point += 3;
                else if(str[j] == 'P') w_point += 1;
            } else {
                if(str[j] == 'q') b_point += 9;
                else if(str[j] == 'r') b_point += 5;
                else if(str[j] == 'b') b_point += 3;
                else if(str[j] == 'n') b_point += 3;
                else if(str[j] == 'p') b_point += 1;
            }
        }
    }

    // cout << w_point << " " << b_point << endl;
    if(w_point == b_point) printf("Draw\n");
    else if(w_point > b_point) printf("White\n");
    else printf("Black\n");
    return 0;
}