#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);

    int n, num;
    cin >> n;
    vector<int> values;
    set<int> val;
    for(int i=0; i < 2*n; i++) {
        cin >> num;
        values.push_back(num);
        val.insert(num);
    }

    int count = 0;
    for(int i=0; i <n; i++) {
        for(int j=0; j < n; j++) {
            if(val.find(i^j) != val.end()) count++;
        }
    }

    if(count%2 == 0) printf("Karen\n");
    else printf("Koyomi\n");
    return 0;
}