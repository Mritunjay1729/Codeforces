#include <iostream>

using namespace std;

int RGB[3][3] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    char col;
    cin >> n;
    int r, g, b;
    r = g = b = 0;
    for(int i=0; i < n; i++) {
        cin >> col;
        if(col=='R') {RGB[0][i%3]++; r++;}
        else if(col=='B') {RGB[1][i%3]++; b++;}
        else {RGB[2][i%3]++; g++;}
    }

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(i%3 == 0) RGB[i][j] = r-RGB[i][j];
            else if(i%3 == 1) RGB[i][j] = b-RGB[i][j];
            else RGB[i][j] = g-RGB[i][j];
        }
    }

    // for(int i=0; i < 3; i++) {
    //     for(int j=0; j < 3; j++) {
    //         cout << RGB[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int mn = INT32_MAX;
    char oindex, tindex, thindex;
    if(RGB[0][0]+RGB[1][1]+RGB[2][2] < mn) {
        mn = RGB[0][0]+RGB[1][1]+RGB[2][2];
        oindex = 'R';
        tindex = 'B';
        thindex = 'G';
    }
    if(RGB[0][0]+RGB[1][2]+RGB[2][1] < mn) {
        mn = RGB[0][0]+RGB[1][2]+RGB[2][1];
        oindex = 'R';
        tindex = 'G';
        thindex = 'B';
    }
    if(RGB[1][0]+RGB[0][1]+RGB[2][2] < mn) {
        mn = RGB[1][0]+RGB[0][1]+RGB[2][2];
        oindex = 'B';
        tindex = 'R';
        thindex = 'G';
    }
    if(RGB[1][0]+RGB[0][2]+RGB[2][1] < mn) {
        mn = RGB[1][0]+RGB[0][2]+RGB[2][1];
        oindex = 'B';
        tindex = 'G';
        thindex = 'R';
    }
    if(RGB[2][0]+RGB[1][1]+RGB[0][2] < mn) {
        mn = RGB[2][0]+RGB[1][1]+RGB[0][2];
        oindex = 'G';
        tindex = 'B';
        thindex = 'R';
    }
    if(RGB[2][0]+RGB[1][2]+RGB[0][1] < mn) {
        mn = RGB[2][0]+RGB[1][2]+RGB[0][1];
        oindex = 'G';
        tindex = 'R';
        thindex = 'B';
    }
    cout << mn << endl;
    string res = "";
    for(int i=0; i < n; i++) {
        if(i%3 == 0) res.push_back(oindex);
        else if(i%3 == 1) res.push_back(tindex);
        else res.push_back(thindex);
    }
    cout << res << endl;
    return 0;
}