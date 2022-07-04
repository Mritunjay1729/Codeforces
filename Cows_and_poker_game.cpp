#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string status;
    cin >> status;
    int A, I, F;
    A = I = F = 0;
    for(int i=0; i < status.length(); i++) {
        if(status[i] == 'A') A++;
        else if(status[i] == 'F') F++;
        else I++;
    }
    if(I == 0) cout << A << endl;
    else if(I == 1) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}