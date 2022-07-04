#include <iostream>

using namespace std;

int arr[1000][2];
int set[1000];

int find(int n) {
    if(set[n] < 0) return n;
    else return find(n);
}

void Union(int a, int b) {
    int x = find(a);
    int y = find(b);
    if(x == y) return;
    else if(set[x] <= set[y]) {
        set[y]+=set[x];
        set[x] = y;
    } else {
        set[x]+=set[y];
        set[y] = x;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i=0; i < n; i++) set[i] = -1;

    for(int i=0; i < n; i++) {
        for(int j=i+1; j < n; j++) {
            if(arr[j][0]==arr[i][0] || arr[j][1] == arr[i][1]) {
                Union(i, j);
            }
        }
    }

    int forests = -1;
    for(int i=0; i < n; i++) 
        if(set[i] < 0) forests++;
    printf("%d\n", forests);

    return 0;
}