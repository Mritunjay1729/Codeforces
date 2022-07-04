#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int matrix[2][2] = {0};
    matrix[1][1] = INT32_MAX;
    cin >> num;
    matrix[0][0] = 0; matrix[0][1] = num;
    matrix[1][0] = 0; matrix[1][1] = num;
    for(int i=1; i < n; i++) {
        cin >> num;
        if(num > matrix[0][1]) {matrix[0][0] = i; matrix[0][1] = num;}
        else if(num < matrix[1][1]) {matrix[1][0] = i; matrix[1][1] = num;}
    }
    int min_index, max_index;
    min_index = min(matrix[0][0], matrix[1][0]);
    max_index = max(matrix[0][0], matrix[1][0]);
    // cout << min_index << " " << max_index << endl;
    printf("%d\n", max(n-min_index-1, max_index));
    return 0;
}