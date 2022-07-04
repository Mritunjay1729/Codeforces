#include <iostream>
#include <vector>

using namespace std;

void findAllCombinations(vector<string> &arr, int s, string val) {
    if(s == 0) {arr.push_back(val); return;}
    findAllCombinations(arr, s-1, val+'0');
    findAllCombinations(arr, s-1, val+'1');
}

int main() {
    string n;
    cin >> n;
    int count = n.length();
    vector<string> poss;
    findAllCombinations(poss, count, "");
    int res = 0;
    for(int i=0; i < poss.size(); i++) {
        if(poss[i] <= n) {
            res++;
        }
    }
    cout << res-1 << endl;
    return 0;
}