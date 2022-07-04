#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, m;
    vector<string> matrix;
    string row;
    vector<int> cols, rows;
    set<int> mxr, mxc;
    while(t--) {
        cin >> n >> m;
        matrix.clear();
        cols.clear();
        rows.clear();
        mxr.clear();
        mxc.clear();
        for(int i=0; i < n; i++) {
            cin >> row;
            matrix.push_back(row);
        }

        int count, max_row = 0, max_col = 0;
        for(int i=0; i < n; i++) {
            count = 0;
            for(int j=0; j < m; j++) {
                if(matrix[i][j] == '*') count++;
                max_row = max(max_row, count);
            }
            rows.push_back(count);
        }

        for(int j=0; j < m; j++) {
            count = 0;
            for(int i=0; i < n; i++) {
                if(matrix[i][j] == '*') count++;
                max_col = max(max_col, count);
            }
            cols.push_back(count);
        }
        if(max_row == m && max_col == n) {cout << "0" << endl; continue;}
        for(int i=0; i < rows.size(); i++) if(rows[i] == max_row) mxr.insert(i);
        for(int j=0; j < cols.size(); j++) if(cols[j] == max_col) mxc.insert(j);

        // cout << mxr.size() << " " << mxc.size() << endl;
        if(mxr.size() == 1 && mxc.size() == 1) {
            int row_index = *mxr.begin();
            int col_index = *mxc.begin();
            int result = m+n-max_row-max_col;
            if(matrix[row_index][col_index] == '.') result--;
            cout << result << endl;
            continue;
        }

        int result = m+n-max_row-max_col, flag = 0;
        for(auto row : mxr) {
            string R = matrix[row];
            for(int i=0; i < m; i++) {
                if(R[i] == '.' && mxc.find(i) != mxc.end()) {
                    result--;
                    cout << result << endl;
                    flag = 1;
                    break;
                } 
            }
            if(flag == 1) break;
        }
        if(flag == 1) continue;
        cout << result << endl;
    }
    return 0;
}