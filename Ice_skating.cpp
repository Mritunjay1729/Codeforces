#include <iostream>

int arr[1000][2] = {0};
int visited[1000];
int n;

using namespace std;

void dfs(int point) {
    visited[point] = 0;
    for(int i=0; i < n; i++) {
        if((arr[i][0] == arr[point][0] || arr[i][1] == arr[point][1]) && visited[i] == -1)
            dfs(i);
    }
}

int main() {
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i=0; i <n; i++) visited[i] = -1;
    int forests = 0;

    for(int i=0; i < n; i++) {
        if(visited[i] == -1) {dfs(i); forests++;}
    }
    printf("%d\n", forests-1);
    return 0;
}