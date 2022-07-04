#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num;
    cin >> n;
    map<int, vector<int>> arr;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(arr.find(num) == arr.end()) arr[num] = {1, i, i};
        else {
            arr[num][0]++;
            arr[num][2]=i;
        }
    }

    int count = 0, l, r;
    for(auto num : arr) {
        if(num.second[0] > count) {
            count = num.second[0];
            l = num.second[1];
            r = num.second[2];
        }else if(num.second[0] == count && num.second[2]-num.second[1] < r-l) {
            count = num.second[0];
            l = num.second[1];
            r = num.second[2];
        }
    }
    cout << l+1 << " " << r+1 << endl;
    return 0;
}