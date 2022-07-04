#include <iostream>
#include <vector>

using namespace std;

int main() {
    int b, k;
    cin >> b >> k;
    vector<int> arr(k);
    for(int i=0; i < k; i++) cin >> arr[i];
    if(b%2 == 0) {
        if(arr[k-1]%2) cout << "odd" << endl;
        else cout << "even" << endl;
    }else{
        int odds = 0;
        for(int i=0; i < k; i++) if(arr[i]%2) odds++;
        if(odds%2) cout << "odd" << endl;
        else cout << "even" << endl; 
    }
    return 0;
}