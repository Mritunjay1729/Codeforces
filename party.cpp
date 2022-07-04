#include <iostream>
#include <vector>

using namespace std;

int BFS(vector<vector<int>> &manager, int pos) {
    int count = 0;
    for(int i=0; i < manager[pos].size(); i++) {
        count = max(count, 1+BFS(manager, manager[pos][i]));
    }
    return count;
}

int main() {
    int n, man;
    cin >> n;
    vector<int> actual_managers;
    vector<vector<int>> manager(n, vector<int>());
    for(int i=0; i < n; i++) {
        cin >> man;
        if(man!=-1) manager[man-1].push_back(i);
        else actual_managers.push_back(i);
    }

    int groups = 0;
    for(int i=0; i < actual_managers.size(); i++) {
        groups = max(groups, BFS(manager, actual_managers[i]));
    }
    printf("%d\n", groups+1);
    return 0;
}

// #include <iostream>
// #include <set>
// #include <vector>

// using namespace std;

// int find(vector<int> match, int a) {
//     if(match[a] < 0) return a;
//     else return find(match, match[a]);
// }

// void Union(vector<int> &match, int a, int b) {
//     int x = find(match, a);
//     int y = find(match, b);
//     if(x ==  y) return;
//     else if(match[x] < match[y]) {
//         match[x]+=match[y];
//         match[y] = x; 
//     } else {
//         match[y] += match[x];
//         match[x] = y;
//     }
// }

// int main() {
//     int n, immediate_manager;
//     cin >> n;
//     vector<int> match(n, -1);
//     for(int i=0; i < n; i++) {
//         cin >> immediate_manager;
//         if(immediate_manager != -1) Union(match, i, immediate_manager-1);
//     }

//     int max_groups = 0;
//     for(int i=0; i < n; i++) {
//         if(match[i] < 0){
//             max_groups = max(max_groups, -match[i]);
//         }
//     }
//     for(int i=0; i < n; i++) printf("%d %d\n", i, match[i]);
//     printf("%d\n", max_groups);
//     return 0;
// }