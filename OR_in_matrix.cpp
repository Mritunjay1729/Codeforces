#include <iostream>
#include <vector>

using namespace std;

bool validate(vector<vector<int>> &matrix, vector<int> &row, vector<int> &col) {
    for(int i=0; i < matrix.size(); i++) {
        for(int j=0; j < matrix[0].size(); j++) {
            if(matrix[i][j] != (row[i]|col[j])) return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m)), original(n, vector<int>(m, 1));
    vector<int> row(n, -1);
    vector<int> col(m, -1);
    int flag = 0;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 0) {
                if(row[i] == -1) row[i]=1;
                else row[i]++;
                if(col[j] == -1) col[j]=1;
                else col[j]++;
            }
        }
    }

    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            if(matrix[i][j] == 1) {
                if(row[i] > 0 && col[j] > 0) {cout << "NO" << endl; exit(0);}
                if(row[i] == m || col[j] == n) {cout << "NO" << endl; exit(0);}
            }
        }
    }
    if(flag == 1) exit(0);

    for(int i=0; i < n; i++) {
        if(row[i] > 0) {
            for(int j=0; j < m; j++) original[i][j] = 0;
        }
    }

    for(int j=0; j < m; j++) {
        if(col[j] > 0) {
            for(int i=0; i < n; i++) original[i][j] = 0;
        }
    }

    for(int i=0; i < n; i++) {
        if(row[i] > 0) row[i] = 0;
        else {
            int val = 0;
            for(int j=0; j < m; j++) val|=original[i][j];
            row[i] = val;
        }
    }

    for(int j=0; j < m; j++) {
        if(col[j] > 0) col[j] = 0;
        else {
            int val = 0;
            for(int i=0; i < n; i++) val|=original[i][j];
            col[j]=val;
        }
    }

    if(!validate(matrix, row, col))  {cout << "NO" << endl; exit(0);}
    cout << "YES" << endl;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cout << original[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}