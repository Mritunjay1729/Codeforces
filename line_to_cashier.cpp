#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> queues(t);
    for(int i=0; i < t; i++) {
        cin >> queues[i];
    }  

    int time, items = 0, min_time = INT32_MAX;
    for(int i=0; i < t; i++) {
        items = 0;
        for(int j=0; j < queues[i]; j++){
            cin >> time;
            items += time;
        }
        items = items*5+15*queues[i];
        min_time = min(min_time, items);
    }
    printf("%d\n", min_time);
    return 0;
}