#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, current, target;
    cin >> n;
    target = n;
    set<int, greater<int>> seq;
    for(int i=0; i < n; i++) {
        cin >> current;
        if(current == target) {
            printf("%d ", current);
            target--;
            while(!seq.empty() && *seq.begin() == target) {
                printf("%d ", target);
                target--;
                seq.erase(seq.begin());
            }
            printf("\n");
        } else {
            seq.insert(current);
            printf("\n");
        }
    }
    return 0;
}