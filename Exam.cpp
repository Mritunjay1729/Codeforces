#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i;
    vector<int> res;
    for(i=n-(n%2==0); i >= 0; i-=2) res.push_back(i);
    if(n > 2 && 1 != n-(n%2)-1) {for(int i=n-n%2; i >= 2; i-=2) res.push_back(i);}
    cout << res.size() << endl;
    for(int i=0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}