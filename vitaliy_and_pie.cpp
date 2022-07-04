#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    char door;
    cin >> n;
    unordered_map<int, int> key;
    string combo;
    cin >> combo;
    int keys_required = 0;
    for(int i=0; i < n-1; i++) {
        key[combo[2*i]]++;
        door = combo[2*i+1];
        if(key.find(door+32) != key.end() && key[door+32] > 0) key[door+32]--;
        else keys_required++;
    }
    cout << keys_required << endl;
    return 0;
}