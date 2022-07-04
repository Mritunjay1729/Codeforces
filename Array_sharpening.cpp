#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n;
    cin >> t;
    vector<int> num;
    int number, flag;
    while(t--) {
        cin >> n;
        num.clear();
        for(int i=0; i <n; i++) {cin >> number; num.push_back(number);}
        flag = 0;
        for(int i=0; i < n-1; i++) {
            // cout << i << " " << num[i] << " " << n-i-1 << endl; 
            if(flag == 0 && num[i] < i) {
                flag = 1;
                if(num[i] < n-i-1) {flag = 2; break;}
            } else if(flag == 1 && num[i] < n-i-1) {
                flag = 2; break;
            }
        }
        if(flag == 2) cout << "No" << endl;
        else {
            if(n%2 == 0 && num[n/2] == num[n/2-1] && num[n/2] == n/2-1) cout << "No" << endl;
            else cout << "Yes" << endl; 
        }

    }
    return 0;
}