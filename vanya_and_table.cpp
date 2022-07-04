#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> arr(100, vector<int>(100, 0));
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    for(int i=0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 > x2 && y1 > y2) {swap(x1, x2); swap(y1, y2);}
        for(int i=x1; i <= x2; i++) {
            for(int j=y1; j <= y2; j++) {
                arr[i-1][j-1]++;
            }
        }
    }

    int sum  = 0;
    for(int i=0; i < 100; i++) for(int j=0; j<100; j++) sum+=arr[i][j];
    cout << sum << endl;
    return 0;
}