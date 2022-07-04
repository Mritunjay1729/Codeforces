#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> tasks(m);
    for(int i=0; i <m; i++) cin >> tasks[i];
    ll i=0, j = 1, count = 0;
    while(i < m) {
        if(tasks[i] != j) {
            if(tasks[i] > j) count+=tasks[i]-j;
            else count+=n-j+tasks[i];
            j = tasks[i];
        }
        i++;
    }
    cout << count << endl;
    return 0;
}