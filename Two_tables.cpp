#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int na, ma;
    cin >> na >> ma;
    vector<string> arr1(na);
    for(int i=0; i < na; i++) cin >> arr1[i];
    int nb, mb;
    cin >> nb >> mb;
    vector<string> arr2(nb);
    for(int i=0; i < nb; i++) cin >> arr2[i];

    int mx=-1, my=-1, overlap=0, moverlap = 0;
    for(int x=-max(na, nb); x <= max(na, nb); x++) {
        for(int y=-max(ma, mb); y <= max(ma, mb); y++) {
            overlap = 0;
            for(int i=0; i < na; i++) {
                for(int j=0; j < ma; j++) {
                    if(i+x>= 0 && i+x < nb && j+y >= 0 && j+y < mb) {
                        overlap+=(arr1[i][j]-'0')*(arr2[i+x][j+y]-'0');
                    }
                }
            }
            if(overlap > moverlap) {moverlap = overlap; mx = x; my = y;}
        }
    }
    cout << mx << " " << my << endl;
    return 0;
}