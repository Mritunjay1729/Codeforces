#include <iostream>
#include <vector>

using namespace std;

int hcf(int a, int b) {
    if(a > b) return hcf(a-b, b);
    if(a < b) return hcf(b-a, a);
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> first(n+1), second(m+1);
    for(int i=0; i < n+1; i++) cin >> first[i];
    for(int j=0; j < m+1; j++) cin >> second[j];
    if(n > m) {
        if((first[0] < 0) ^ (second[0] < 0)) cout << "-";
        cout << "Infinity" << endl;
    }else if(n < m) cout << 0 << "/" << 1 << endl;
    else{
        int h = hcf(abs(first[0]), abs(second[0]));
        first[0]/=h;
        second[0]/=h;
        if((first[0] < 0) ^ (second[0] < 0)) cout << "-";
        cout << abs(first[0]) << "/" << abs(second[0]) << endl;
    }
    return 0;
}