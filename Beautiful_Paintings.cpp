#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    map<int, int> arr;
    for(int i=0; i < n; i++) {cin >> num; arr[num]++;}
    int count = 0, total = 0;
    do {
        count = -1;
        for(auto &mp: arr) {
            if(mp.second == 0) continue;
            count++;
            mp.second--;
        }
        if(count != -1) total+=count;
    }while(count != -1);
    cout << total << endl;
    return 0;
}