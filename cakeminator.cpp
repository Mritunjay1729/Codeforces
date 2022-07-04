#include <iostream>
#include <set>

using namespace std;

int main() {
    int r, c;
    char cake;
    set<int> row_index, col_index;
    cin >> r >> c;
    for(int i=0; i < r; i++) {
        for(int j=0; j < c; j++){
            cin >> cake;
            if(cake == 'S') {
                if(row_index.find(i) == row_index.end()) row_index.insert(i);
                if(col_index.find(j) == col_index.end()) col_index.insert(j);
            }   
        }
    }
    int k = row_index.size() * col_index.size();
    printf("%d\n", r*c-k);
    return 0;
}