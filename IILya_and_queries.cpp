#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin >> str;
    vector<int> satisfy(str.length(), 0);
    for(int i=0; i < str.length(); i++) {
        if(str[i] == str[i+1]) satisfy[i] = 1;
    }

    int sum = 0, temp;
    for(int i=0; i < satisfy.size(); i++) {
        temp = satisfy[i];
        satisfy[i] = sum;
        sum+=temp;
    }

    int q, l, r;
    cin >> q;
    while(q--) {
        sum = 0;
        cin >> l >> r;
        cout << satisfy[r-1]-satisfy[l-1] << endl;
    }
    return 0;
}