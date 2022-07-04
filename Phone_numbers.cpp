#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string phn;
    cin >> phn;
    string nphn = "";
    int i=0;
    nphn.append(phn.substr(0, 2));
    i+=2;
    if(n%2 == 1) {nphn.push_back(phn[i]); i++;}
    while(i < n) {
        nphn.push_back('-');
        nphn.append(phn.substr(i, 2));
        i+=2;
    }
    cout << nphn << endl;
    return 0;
}