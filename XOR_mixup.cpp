#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, num, x;
    vector<int> arr;
    while(t--) {
        cin >> n;
        x = 0;
        arr.clear();
        for(int i=0; i < n; i++) {
            cin >> num; 
            x^=num; 
            arr.push_back(num);
        }
        
        for(int i=0; i < n; i++) {
            if((x^arr[i]) == arr[i]) {cout << arr[i] << endl; break;}
        }
    }
    return 0;
}