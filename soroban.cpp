#include <iostream>

using namespace std;

int main() {
    int n, rem;
    cin >> n;
    string str;
    if(n==0) {printf("O-|-OOOO\n");exit(0);}
    while(n > 0) {
        str = "";
        rem = n%10;
        n/=10;
        if(rem >= 5) str.append("-O");
        else str.append("O-");
        if(rem>=5) rem-=5;
        str.push_back('|');
        for(int i=0; i < rem; i++) str.push_back('O');
        str.push_back('-');
        for(int i=0; i < 4-rem; i++) str.push_back('O');
        cout << str << endl;
    }
    return 0;
}