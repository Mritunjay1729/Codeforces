#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> supply_lines(n);
    for(int i=0; i <n; i++) cin >> supply_lines[i];
    sort(supply_lines.begin(), supply_lines.end(), greater<int>());
    if(m <= k ) {printf("%d\n", 0); exit(0);}
    int socket_count = 0;
    int sockets_available = k;
    int i=0;
    while(i < n) {
        // cout << m << " " << sockets_available << " " << supply_lines[i] << endl;   
        if(m <= sockets_available-1+supply_lines[i]) {printf("%d\n", socket_count+1); exit(0);}
        else {
            sockets_available+=supply_lines[i++];
            sockets_available--;
            socket_count++;
        }     
    }
    printf("%d\n", -1);
    return 0;
}