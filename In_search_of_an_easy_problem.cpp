#include <iostream>
#include <vector>
#define ll long long int
#define fl(n) for(int i=0; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    int n;
    cin >> n;
    int isHard, flag = 0;
    for(int i=0; i< n; i++) {
        cin >> isHard;
        if(flag == 1) continue;
        if(isHard) flag = 1;
    }
    if(flag) cout << "HARD\n";
    else cout << "EASY\n";
    return 0;
}