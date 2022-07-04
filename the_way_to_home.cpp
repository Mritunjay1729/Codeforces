#include <iostream>
#include <vector>

using namespace std;

// int min_count(int index, int d, vector<int> &path) {
//     if(index == path.size()-1) return 0;
//     int count = INT32_MAX;
//     for(int i=index+1; i <= index+d && i < path.size(); i++) {
//         if(path[i] == 0) continue;
//         else {
//             count = min(count, 1 + min_count(i, d, path));
//         }
//     }
//     return count;
// }

int main() {
    int n, d, step;
    cin >> n >> d;
    vector<int> path;
    string p;
    cin >> p;
    for(int i=0; i < n; i++) {
        path.push_back(p[i]=='1');
    }
    int i= 0, j;
    int count = 0;
    while(i != n-1) {
        for(j=i+d; j>i; j--) {
            if(path[j] == 1) break;
        }
        if(j == i) {printf("%d\n", -1); exit(0);}
        i = j;
        count++;
    }
    printf("%d\n", count);
}