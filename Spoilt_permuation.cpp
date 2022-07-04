#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> collection(n);
    for(int i=0; i < n; i++) cin >> collection[i];
    int i=0;
    while(i < n-1 && collection[i] < collection[i+1]) i++;
    int j = n-1;
    while(j > i && collection[j] > collection[j-1]) j--;
    int x, y;
    x = i, y = j;
    if(x == y) {cout << 0 << " " << 0 << endl; exit(0);}
    while(i < j) {
        swap(collection[i], collection[j]);
        i++; j--;
    }
    for(int i=1; i < n; i++) {if(collection[i] < collection[i-1]) {cout << 0 << " "  << 0 << endl; exit(0);}}
    cout << x+1 << " " << y+1 << endl;
    return 0;
}