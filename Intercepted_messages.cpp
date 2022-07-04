#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> archive1(n), archive2(m);
    for(int i=0; i < n; i++)  cin >> archive1[i];
    for(int i=0; i < m; i++) cin >> archive2[i];
    int i, j, file1 = archive1[0], file2 = archive2[0], file_count = 0;
    i = j = 0;
    while(i < n && j < m) {
        // cout << file1 << " " << file2 << endl;
        if(file1 == file2) {
            file_count++; 
            file1 = file2 = 0; 
            i++, j++;
            if(i < n && j < m) {file1 = archive1[i]; file2 = archive2[j];}
        }else if(file1 > file2) {
            j++;
            file2+=archive2[j];
        }else {
            i++;
            file1+=archive1[i];
        }
    }
    printf("%d\n", file_count);
    return 0;
}