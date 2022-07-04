#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string str;
    map<string, int> count;
    while(n--) {
        cin >> str;
        if(count.find(str) == count.end()) {
            cout << "OK" << endl;
            count[str] = 1;
        }else{
            cout << str << count[str] << endl;
            count[str]++;
        }
    }
    return 0;
}