#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cond;
    cin >> n;
    bool turned[n] = {false};
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cin >> cond;
            if(cond == 1 || cond == 3) turned[i] = true;
        }
    }
    int count = 0;
    vector<int> safe;
    for(int i=0; i < n; i++) if(turned[i] == false) {
        count++;
        safe.push_back(i+1);
    }
    printf("%d\n", count);
    for(int i=0; i < safe.size(); i++) printf("%d ", safe[i]);
    if(safe.size() > 0) cout << endl;
    return 0;
}