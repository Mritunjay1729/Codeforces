#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string passwd;
    map<int, int> length;
    for(int i=0; i < n; i++)  {
        cin >> passwd;
        length[passwd.length()]++;
    }
    string actual_passwd;
    cin >> actual_passwd;

    int mlc = 0, worst = 0;
    for(auto pass : length) {
        if(pass.first == actual_passwd.length()) {
            worst = pass.second;
            break;
        }
        mlc+=pass.second;
    }
    int best_time = mlc + 5*(mlc/k) + 1;
    mlc+=worst;
    int worst_time = mlc + 5*((mlc-1)/k);
    printf("%d %d\n", best_time, worst_time);
    return 0;
}