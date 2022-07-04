#include <iostream>
#include <vector>

using namespace std;

int main() {
    string collection;
    cin >> collection;
    int n = collection.length(), last_skip = -1;
    int count = 1, total = 0;
    for(int i=1; i <n; i++) {
        if(collection[i] != collection[i-1]) {
           total+=count/5+(count%5>0); 
           count = 1;
        }else count++;
    }
    total+=count/5+(count%5 > 0);
    cout << total << endl;
    return 0;
}