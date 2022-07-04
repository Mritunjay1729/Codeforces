#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> questions(n);
    for(int i=0; i < n; i++) cin >> questions[i];
    int i=0, count = 0;
    while(i < n && questions[i] <= k) {i++; count++;;}
    if(i == n) {cout << n << endl; exit(0);}
    int j = n-1;
    while(j > i && questions[j] <= k) {
        j--;
        count++;
    }
    cout << count << endl;
    return 0;
}