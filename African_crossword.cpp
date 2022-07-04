#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<string> arr(m);
    for(int i=0; i < m; i++) cin >> arr[i];

    map<char, int> index;
    vector<vector<bool>> crossed(m, vector<bool>(n, false));
    for(int i=0; i < m; i++) {
        index.clear();
        for(int j=0; j < n; j++) {
            if(index.find(arr[i][j]) == index.end()) index[arr[i][j]] = j;
            else{
                crossed[i][j] = true;
                crossed[i][index[arr[i][j]]] = true;
            }
        }
    }

    for(int j=0; j <n; j++) {
        index.clear();
        for(int i=0; i <m; i++) {
            if(index.find(arr[i][j]) == index.end()) index[arr[i][j]] = i;
            else{
                crossed[i][j] = true;
                crossed[index[arr[i][j]]][j] = true;
            }
        }
    }

    for(int i=0; i < m; i++) {
        for(int j=0; j <n; j++) {
            if(!crossed[i][j]) cout << arr[i][j];
        }
    }
    cout << endl;
    return 0;
}